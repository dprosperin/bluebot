void avancer(unsigned long temps) {
  analogWrite(MOTEUR_GAUCHE_FORWARD, 200);
  analogWrite(MOTEUR_GAUCHE_BACKWARD, 0);
  
  analogWrite(MOTEUR_DROIT_FORWARD, 200);
  analogWrite(MOTEUR_DROIT_BACKWARD, 0);

  delay(temps);

  reset();
}

void reculer(unsigned long temps){
  analogWrite(MOTEUR_GAUCHE_BACKWARD, 200);
  analogWrite(MOTEUR_GAUCHE_FORWARD, 0);

  analogWrite(MOTEUR_DROIT_BACKWARD, 200);
  analogWrite(MOTEUR_DROIT_FORWARD, 0);

  delay(temps);

  reset();
}

void reset() {
  analogWrite(MOTEUR_GAUCHE_BACKWARD, 0);
  analogWrite(MOTEUR_GAUCHE_FORWARD, 0);

  analogWrite(MOTEUR_DROIT_BACKWARD, 0);
  analogWrite(MOTEUR_DROIT_FORWARD, 0);
}


void gauche(unsigned long temps) {
  analogWrite(MOTEUR_GAUCHE_BACKWARD, 200);
  analogWrite(MOTEUR_GAUCHE_FORWARD, 0);

  analogWrite(MOTEUR_DROIT_FORWARD, 200);
  analogWrite(MOTEUR_DROIT_BACKWARD, 0);
  
  delay(temps);
  reset();  
}

void droite(unsigned long temps) {
  analogWrite(MOTEUR_GAUCHE_FORWARD, 200);
  analogWrite(MOTEUR_GAUCHE_BACKWARD, 0);

  analogWrite(MOTEUR_DROIT_BACKWARD, 200);
  analogWrite(MOTEUR_DROIT_FORWARD, 0);
  
  delay(temps);
  reset();
}
