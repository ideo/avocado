/*

Avocado + Arduino
Created by: Marco Triverio

INSTRUCTIONS
Follow this tutorial to have your Blend Micro work with the Arduino IDE
http://redbearlab.com/getting-started-blendmicro
In Quartz Composer user Bluetooth Send, Bluetooth Receive, and Aggregate Values to communicate with your Blend Micro

*/


#include <SPI.h>
#include <boards.h>
#include <RBL_nRF8001.h>
 
#define DIGITAL_OUT_PIN    13

// Received data
// - data_buffer gives access to the 4 bytes that have been received
// - data aggregates those 4 bytes in one unsigned long
byte data_buffer[4] = { 0x00, 0x00, 0x00, 0x00 };
unsigned long data = 0;

void setup()
{
	// Set your BLE Shield name here, max. length 10
	ble_set_name("BlendMicro");

	// Init. and start BLE library.
	ble_begin();

	// Set pin mode  
	pinMode(DIGITAL_OUT_PIN, OUTPUT);

	// Enable serial debug
	Serial.begin(57600);
	Serial.println("Ready to communicate with Avocado!");
}


void loop()
{
	// If data is ready
	while(ble_available())
	{
		// receives values and stores them in data_buffer and data
		readBluetoothData();

		// turn on LED if number is odd
		if (data%2 == 1)
			digitalWrite(DIGITAL_OUT_PIN, HIGH);
		else
			digitalWrite(DIGITAL_OUT_PIN, LOW);
	}

	if (!ble_connected())
	{
		digitalWrite(DIGITAL_OUT_PIN, LOW);
	}

	// Allow BLE Shield to send/receive data
	delay(10);
	ble_do_events();  
}


void readBluetoothData() {
	Serial.print("\nJust received bytes ");
	data = 0;
	for(int i=0; i<4; i++) {

		// read values sent via bluetooth
		data_buffer[i] = ble_read();

		// print values as they come in
		print_debug(data_buffer[i], i);

		// aggregate values into one
		// (useful when trying to send values greater than 255)
		data += ((unsigned long)data_buffer[i] << (3-i)*8);
	}

	Serial.print("Aggregated value: ");
	Serial.println((unsigned long)data);
}

void print_debug(unsigned int data, int i) {
	Serial.print("[");
	Serial.print(i);
	Serial.print("] ");
	Serial.print(data);
	
	if (i<3) Serial.print(", ");
	else  Serial.println();
}



