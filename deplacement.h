/*
 * La fonction reculer permet de reculer pendant un certain temps en milliseconde.
 * On active à pleine puissance :
 *  - MOTEUR_GAUCHE_BACKWARD
 *  - MOTEUR_DROIT_BACKWARD
 */
void reculer(unsigned long temps);
/*
 * La fonction avancer permet d'avancer pendant un certain temps en milliseconde.
 * On active à pleine puissance :
 *  - MOTEUR_GAUCHE_FORWARD
 *  - MOTEUR_DROIT_FORWARD
 */
void avancer(unsigned long temps);
/*
 * La fonction gauche permet d'aller à gauche pendant un certain temps en milliseconde.
 * On active à pleine puissance :
 * - MOTEUR_DROIT_FORWARD
 * - MOTEUR_GAUCHE_BACKWARD
 */
void gauche(unsigned long temps);
/*
 * La fonction droite permet d'aller à droite pendant un certain temps en milliseconde.
 * On active à pleine puissance :
 * - MOTEUR_GAUCHE_FORWARD
 * - MOTEUR_DROIT_BACKWARD
 */
void droite(unsigned long temps);
/*
 * La fonction reset stop les moteurs.
 */
void reset();
