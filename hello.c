#include <stdio.h>

int main(void) {
    printf("Hello from C!\n");
    printf("This program has %lu bytes in an int.\n", sizeof(int));
    
    printf("\nAppuyez sur Entree pour quitter...");
    getchar(); // Cette ligne attend une saisie avant de finir [cite: 258]
    return 0;
}