#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;
    int continue_calculating = 1; // 1 signifie "Vrai" en C

    printf("--- Calculatrice Continue (Tapez '0 q 0' pour quitter) ---\n");

    while (continue_calculating) {
        printf("\nEntrez l'operation : ");
        
        // On lit l'operation
        if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
            printf("Erreur de format. Fin du programme.\n");
            break; 
        }

        if (op == 'q' || op == 'Q') {
            continue_calculating = 0;
            break;
        }

        switch(op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/': 
                if (num2 != 0) result = num1 / num2;
                else { printf("Erreur : Division par zero !\n"); continue; }
                break;
            default: printf("Operateur inconnu.\n"); continue;
        }

        printf("Resultat : %.2f\n", result);
    }

    printf("Au revoir !\n");
    return 0;
}