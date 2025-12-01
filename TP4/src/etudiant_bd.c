#include <stdio.h>
#include "fichier.h"

struct etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    int note1;
    int note2;
};

int main() {
    struct etudiant tab[5];

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);

        printf("Nom : ");
        scanf("%s", tab[i].nom);

        printf("Prénom : ");
        scanf("%s", tab[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", tab[i].adresse);

        printf("Note 1 : ");
        scanf("%d", &tab[i].note1);

        printf("Note 2 : ");
        scanf("%d", &tab[i].note2);

        char ligne[256];
        sprintf(ligne, "%s;%s;%s;%d;%d",
                tab[i].nom, tab[i].prenom, tab[i].adresse,
                tab[i].note1, tab[i].note2);

        ecrire_dans_fichier("etudiant.txt", ligne);
    }

    return 0;
}
