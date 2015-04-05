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

	if (!ble_connected())
	{
		digitalWrite(DIGITAL_OUT_PIN, LOW);
	}
	else {
		digitalWrite(DIGITAL_OUT_PIN, HIGH);	
	}

	uint8_t input = digitalRead(DIGITAL_IN_PIN);
	writeData(0,0,0,input);

	// Allow BLE Shield to send/receive data
	ble_do_events();  

	// Waits one second before sending something else
	delay(100);
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



