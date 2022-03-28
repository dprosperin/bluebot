#define DEBUG 1
#define BAUDRATE 9600
#define RXPIN 11  // Vers la broche TX du module bluetooth
#define TXPIN 12  // Vers la broche RX du module bluetooth 
/*
 * NOTE :
 * La broche RX du module bluetooth n'est pas branché au microcontrôleur.
 * Donc les messages provenant du module bluetooth ne seront pas affichés.
 * 
 */


#define TIMEOUT 100

// 9 et 6 Moteur Droite
// 3 et 5 Moteur Gauche

#define MOTEUR_GAUCHE_FORWARD 3
#define MOTEUR_GAUCHE_BACKWARD 5

#define MOTEUR_DROIT_FORWARD 9
#define MOTEUR_DROIT_BACKWARD 6

#define MOVING_TIME 50 // Le temps en milliseconde pendant lequel on active le moteur
