#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("--- Calculatrice Interactive ---\n");
    printf("Entrez l'operation (ex: 10 + 5) : ");
    
    // Lecture de l'entree : nombre1 operateur nombre2
    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
        printf("Erreur de saisie. Format attendu : 10 + 5\n");
        return 1;
    }

    switch(op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0) result = num1 / num2;
            else { printf("Erreur : Division par zero !\n"); return 1; }
            break;
        default: printf("Operateur inconnu.\n"); return 1;
    }

    printf("Resultat : %.2f\n", result);
    return 0;
}