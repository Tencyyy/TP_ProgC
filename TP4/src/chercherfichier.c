#include <stdio.h>
#include <string.h>

int compter_occurrences(const char *ligne, const char *mot) {
    int count = 0;
    const char *pos = ligne;

    while ((pos = strstr(pos, mot)) != NULL) {
        count++;
        pos++;
    }
    return count;
}

int main() {
    char fichier[50], phrase[100];

    printf("Nom du fichier : ");
    scanf("%s", fichier);

    printf("Phrase à rechercher : ");
    scanf(" %[^\n]", phrase);

    FILE *f = fopen(fichier, "r");
    if (!f) {
        printf("Impossible d'ouvrir le fichier.\n");
        return 1;
    }

    char ligne[256];
    int num = 1;

    while (fgets(ligne, sizeof(ligne), f)) {
        int occ = compter_occurrences(ligne, phrase);
        if (occ > 0) {
            printf("Ligne %d : %d fois\n", num, occ);
        }
        num++;
    }

    fclose(f);
    return 0;
}
