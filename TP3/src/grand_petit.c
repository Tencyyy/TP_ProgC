#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i, max, min;

    srand(time(NULL));

    for(i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 1000 + 1; // Valeurs 1 à 1000
    }

    max = tab[0];
    min = tab[0];

    for(i = 1; i < TAILLE; i++) {
        if(tab[i] > max) max = tab[i];
        if(tab[i] < min) min = tab[i];
    }

    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
