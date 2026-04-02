#include <stdio.h>
#include <unistd.h> // Pour sleep()

typedef enum { ROUGE, VERT, ORANGE } EtatFeu;

int main() {
    EtatFeu etat_actuel = ROUGE;

    while(1) {
        switch(etat_actuel) {
            case ROUGE:
                printf("[ROUGE] Arret - Attente 5s\n");
                sleep(5);
                etat_actuel = VERT;
                break;
            case VERT:
                printf("[VERT] Circulez - Attente 4s\n");
                sleep(4);
                etat_actuel = ORANGE;
                break;
            case ORANGE:
                printf("[ORANGE] Attention - Attente 2s\n");
                sleep(2);
                etat_actuel = ROUGE;
                break;
        }
    }
    return 0;
}