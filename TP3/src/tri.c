#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE], i, j, tmp;

    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires
    for(i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 1000; 
    }

    // Affichage du tableau non trié
    printf("Tableau non trié :\n");
    for(i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Tri à bulles
    for(i = 0; i < TAILLE-1; i++) {
        for(j = 0; j < TAILLE-i-1; j++) {
            if(tab[j] > tab[j+1]) {
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié par ordre croissant :\n");
    for(i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
