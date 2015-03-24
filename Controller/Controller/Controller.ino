//
// Controller
//
// Project Microcontrollertechniek
// Author 		Nick Raeven
// 				Nick Raeven
//
// Date			24/03/15 10:47
// Version		<#version#>
//
// Copyright	© Nick Raeven, 2015
// Licence		<#license#>
//
// See         ReadMe.txt for references
//

#include "Arduino.h"

uint8_t myLED;

void setup() {
    myLED = 13;
    
    pinMode(myLED, OUTPUT);
}

void loop() {
    digitalWrite(myLED, HIGH);
    delay(500);
    digitalWrite(myLED, LOW);
    delay(500);
}
