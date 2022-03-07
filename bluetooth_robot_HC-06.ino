#include "config.h"
#include <SoftwareSerial.h>

SoftwareSerial BTserial(RXPIN, TXPIN);

String message;

void reculer(unsigned long temps);
void avancer(unsigned long temps);
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
      avancer(1000);
    } else if (message == "reculer") {
      reculer(1000);
    } else {
      Serial.print("Error the following character is not a valid command : ");
      #if DEBUG == 1
        Serial.println(message);
      #endif        
    }
  }
  BTserial.flush();
  delay(1000);
}

void avancer(unsigned long temps) {
  analogWrite(MOTEUR_GAUCHE_2, 0);
  analogWrite(MOTEUR_GAUCHE_1, 200);

  analogWrite(MOTEUR_DROIT_1, 0);
  analogWrite(MOTEUR_DROIT_2, 200);

  delay(temps);

  analogWrite(MOTEUR_GAUCHE_2, 0);
  analogWrite(MOTEUR_GAUCHE_1, 0);

  analogWrite(MOTEUR_DROIT_1, 0);
  analogWrite(MOTEUR_DROIT_2, 0);
}

void reculer(unsigned long temps){
  analogWrite(MOTEUR_GAUCHE_2, 200);
  analogWrite(MOTEUR_GAUCHE_1, 0);

  analogWrite(MOTEUR_DROIT_1, 200);
  analogWrite(MOTEUR_DROIT_2, 0);

  delay(temps);

  analogWrite(MOTEUR_GAUCHE_2, 0);
  analogWrite(MOTEUR_GAUCHE_1, 0);

  analogWrite(MOTEUR_DROIT_1, 0);
  analogWrite(MOTEUR_DROIT_2, 0);
}
