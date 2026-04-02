#include <stdio.h>
#include "vending.h"

int main() {
    Produit stock[2] = {{"Eau", 500.0, 5}, {"Soda", 700.0, 2}};
    int choix;
    
    printf("--- Bienvenue au Distributeur ---\n");
    afficher_menu(stock, 2);
    
    printf("Votre choix : ");
    scanf("%d", &choix);
    
    if (stock[choix-1].quantite > 0) {
        printf("Distribution de %s en cours...\n", stock[choix-1].nom);
    } else {
        printf("Rupture de stock !\n");
    }
    return 0;
}