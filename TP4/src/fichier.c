#include <stdio.h>
#include "fichier.h"

void lire_fichier(const char *nom) {
    FILE *f = fopen(nom, "r");
    if (!f) {
        printf("Erreur : impossible d'ouvrir %s\n", nom);
        return;
    }

    char ligne[256];
    while (fgets(ligne, sizeof(ligne), f)) {
        printf("%s", ligne);
    }

    fclose(f);
}

void ecrire_dans_fichier(const char *nom, const char *message) {
    FILE *f = fopen(nom, "a");
    if (!f) {
        printf("Erreur : impossible d'écrire dans %s\n", nom);
        return;
    }

    fprintf(f, "%s\n", message);
    fclose(f);
}
