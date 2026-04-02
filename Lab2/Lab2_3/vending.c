#include <stdio.h>
#include "vending.h"

void afficher_menu(Produit p[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d. %s - %.2f FCFA (Stock: %d)\n", i+1, p[i].nom, p[i].prix, p[i].quantite);
    }
}   