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
#define DIGITAL_IN_PIN     9

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
	pinMode(DIGITAL_IN_PIN, INPUT);

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

		// use the received value (0-255) to change intensity of LED
		analogWrite(DIGITAL_OUT_PIN, data_buffer[3]);
	}

	if (!ble_connected())
	{
		digitalWrite(DIGITAL_OUT_PIN, LOW);
	}

	uint8_t input = digitalRead(DIGITAL_IN_PIN);
	writeData(0,0,0,input);

	// Allow BLE Shield to send/receive data
	ble_do_events();  

	// Waits before sending something else
	delay(200);
}


void writeData(uint8_t data0, uint8_t data1, uint8_t data2, uint8_t data3) {
	Serial.print("Sending ");
	Serial.print(data0);
	Serial.print(", ");
	Serial.print(data1);
	Serial.print(", ");
	Serial.print(data2);
	Serial.print(", ");
	Serial.println(data3);

	ble_write(data0);
	ble_write(data1);
	ble_write(data2);
	ble_write(data3);
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



