/*
 * Ce bout de code fonctionne avec les modules :
 *  - Bluetooth HC-06
 * 
 * Code : 
 *  'avancer' -> avancer pendant MOVING_TIME
 *  'reculer' -> reculer pendant MOVING_TIME
 * 
 * Note : 
 * Le code doit se terminer par un retour chariot.
 * 
 * Lorsque BTserial reçoit le message :
 * 1 - il le lire directement 
 * 2 - si il est égale à 'avancer' alors il avancer pendant 1s sinon si il est égale à 'reculer' il reculer pendant 1s ou sinon il affiche un message d'erreur
 */

#include "config.h"
#include "deplacement.h"
#include <SoftwareSerial.h>

SoftwareSerial BTserial(RXPIN, TXPIN);

String message;

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
    message = BTserial.readStringUntil(TERMINATOR);
    #if DEBUG == 1
      Serial.print("Received message : ");
      Serial.println(message);
    #endif
    if (message == "avancer") {
      avancer(MOVING_TIME);
    } else if (message == "reculer") {
      reculer(MOVING_TIME);
    } else {
      Serial.print("Error the following character is not a valid command : ");
      #if DEBUG == 1
        Serial.println(message);
      #endif        
    }
  }
  BTserial.flush();
}

