#include "config.h"

void reculer();
void avancer();
void setup() {
    Serial.print("Sketch: "); Serial.println(__FILE__);
    Serial.print("Uploaded: "); Serial.println(__DATE__);
}

void loop() {
  reculer();
  delay(1000);
}

void avancer() {
  analogWrite(MOTEUR_GAUCHE_2, 0);
  analogWrite(MOTEUR_GAUCHE_1, 200);

  analogWrite(MOTEUR_DROIT_1, 0);
  analogWrite(MOTEUR_DROIT_2, 200);
}

void reculer(){
  analogWrite(MOTEUR_GAUCHE_2, 200);
  analogWrite(MOTEUR_GAUCHE_1, 0);

  analogWrite(MOTEUR_DROIT_1, 200);
  analogWrite(MOTEUR_DROIT_2, 0);
}
