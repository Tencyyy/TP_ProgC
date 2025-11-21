#include <stdio.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i, n, debut, fin, milieu, trouve = 0;

    // Création d'un tableau trié
    for(i = 0; i < TAILLE; i++) {
        tab[i] = i * 2;  // Exemple : 0, 2, 4, 6...
    }

    // Affichage du tableau
    printf("Tableau trié :\n");
    for(i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Saisie de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &n);

    // Recherche dichotomique
    debut = 0;
    fin = TAILLE - 1;

    while(debut <= fin) {
        milieu = (debut + fin) / 2;
        if(tab[milieu] == n) {
            trouve = 1;
            break;
        } else if(tab[milieu] < n) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    if(trouve)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
