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
