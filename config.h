#define DEBUG 1
#define BAUDRATE 9600
#define RXPIN 11  // Vers la broche TX du module bluetooth
#define TXPIN 12  // Vers la broche RX du module bluetooth 
// note : la broche RX du module bluetooth n'est pas branché au microcontrôleur

#define TIMEOUT 5
#define TERMINATOR '\n'

// 9 et 6 Moteur Droite
// 3 et 5 Moteur Gauche

#define MOTEUR_GAUCHE_1 3
#define MOTEUR_GAUCHE_2 5

#define MOTEUR_DROIT_1 6
#define MOTEUR_DROIT_2 9

#define MOVING_TIME 1000 // Le temps en milliseconde pendant lequel on active le moteur
