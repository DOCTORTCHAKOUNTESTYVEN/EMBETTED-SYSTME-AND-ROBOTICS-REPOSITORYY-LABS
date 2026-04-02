#include <stdio.h>

int main() {
    int code_entre, mouvement;
    int code_secret = 1234;
    int systeme_arme = 0;

    printf("Entrez le code pour armer le systeme : ");
    scanf("%d", &code_entre);

    if (code_entre == code_secret) {
        systeme_arme = 1;
        printf("Systeme ARME. Surveillance en cours...\n");
    } else {
        printf("Code incorrect.\n");
        return 1;
    }

    while(systeme_arme) {
        printf("\nAppuyez sur '1' si un mouvement est detecte ou '0' pour quitter : ");
        scanf("%d", &mouvement);

        if (mouvement == 1) {
            printf("!!! ALARME ACTIVE - INTRUSION DETECTEE !!!\n");
            break; 
        } else if (mouvement == 0) {
            break;
        }
    }
    return 0;
}