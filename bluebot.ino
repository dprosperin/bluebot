/*
 * Ce bout de code fonctionne avec les modules :
 *  - Bluetooth HC-06
 * 
 * Code : 
 *  'a'  -> avancer pendant MOVING_TIME
 *  'r'  -> reculer pendant MOVING_TIME
 *  'g'  -> aller à gauche pendant MOVING_TIME / 2
 *  'd'  -> aller à droite pendant MOVING_TIME / 2
 */

#include "config.h"
#include "deplacement.h"
#include <SoftwareSerial.h>

SoftwareSerial BTserial(RXPIN, TXPIN);

char message;

void setup() {
    Serial.begin(BAUDRATE);
  
    Serial.print("Sketch: "); Serial.println(__FILE__);
    Serial.print("Uploaded: "); Serial.println(__DATE__);

    BTserial.begin(BAUDRATE);
    BTserial.setTimeout(TIMEOUT);
    Serial.print("BTSERIAL started at ");
    Serial.println(BAUDRATE);
    Serial.println(" ");
}

void loop() {
  if (BTserial.available()) {
    
    message = BTserial.read();
    #if DEBUG == 1
      Serial.print("Received message : ");
      Serial.println(message);
    #endif

    if (message == 'a') {
      avancer(MOVING_TIME);
    } else if (message == 'r') {
      reculer(MOVING_TIME);
    } else if (message == 'g') {
      gauche(MOVING_TIME / 2); 
    } else if (message == 'd') {
      droite(MOVING_TIME / 2);
    } else {
      Serial.print("Error the following character is not a valid command : ");
      Serial.println(message, BIN);      
    }
  }
  BTserial.flush();
}
