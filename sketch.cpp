#include <Arduino.h>

/*
Nyalain LED selama 1 detik trus mati selama 1 detik, gitu aja terus
di ulang ulang_-
*/

void setup()
{
	Serial.begin(9600);

	// inisialisasi pin digital sebagai output.
	// Pin 13 punya LED yang terhubung di kebanyakan papan Arduino:
	pinMode(13, OUTPUT);
}

void loop()
{
	Serial.println("Hello world!");

	digitalWrite(13, HIGH);   // Setting LED nya ke on
	delay(1000);              // Nunggu 1 detik
	digitalWrite(13, LOW);    // Setting LED nya ke off
	delay(1000);              // Nunggu 1 detik
}