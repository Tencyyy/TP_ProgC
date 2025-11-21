#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE], i, n, trouve = 0;

    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires
    for(i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 1000;
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for(i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Demande de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &n);

    // Recherche
    for(i = 0; i < TAILLE; i++) {
        if(tab[i] == n) {
            trouve = 1;
            break;
        }
    }

    if(trouve)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
