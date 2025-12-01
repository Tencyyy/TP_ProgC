#include <stdio.h>
#include <stdlib.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

// Fonctions pour chaque exercice
void run_41() {
    int num1, num2;
    char op;

    printf("Exercice 4.1 - Calcul avec opérateurs\n");
    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    int result;
    switch(op) {
        case '+': result = somme(num1, num2); break;
        case '-': result = difference(num1, num2); break;
        case '*': result = produit(num1, num2); break;
        case '/': result = quotient(num1, num2); break;
        case '%': result = modulo(num1, num2); break;
        case '&': result = et(num1, num2); break;
        case '|': result = ou(num1, num2); break;
        case '~': result = negation(num1); break;
        default:
            printf("Opérateur invalide\n");
            return;
    }
    printf("Résultat : %d\n", result);
}

void run_42() {
    int choix;
    char nom_fichier[256];
    char message[1024];

    printf("Exercice 4.2 - Gestion de fichiers\n");
    printf("Que souhaitez-vous faire ?\n1. Lire un fichier\n2. Écrire dans un fichier\nVotre choix : ");
    scanf("%d", &choix);
    getchar(); // consommer le retour chariot

    if (choix == 1) {
        printf("Entrez le nom du fichier à lire : ");
        fgets(nom_fichier, 256, stdin);
        nom_fichier[strcspn(nom_fichier, "\n")] = 0; // enlever \n
        lire_fichier(nom_fichier);
    } else if (choix == 2) {
        printf("Entrez le nom du fichier dans lequel écrire : ");
        fgets(nom_fichier, 256, stdin);
        nom_fichier[strcspn(nom_fichier, "\n")] = 0;

        printf("Entrez le message à écrire : ");
        fgets(message, 1024, stdin);
        message[strcspn(message, "\n")] = 0;

        ecrire_dans_fichier(nom_fichier, message);
    } else {
        printf("Choix invalide\n");
    }
}

void run_47() {
    printf("Exercice 4.7 - Liste de couleurs\n");
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleurs[10] = {
        {0xFF, 0x00, 0x00, 0xFF},
        {0x00, 0xFF, 0x00, 0xFF},
        {0x00, 0x00, 0xFF, 0xFF},
        {0xFF, 0xFF, 0x00, 0xFF},
        {0xFF, 0x00, 0xFF, 0xFF},
        {0x00, 0xFF, 0xFF, 0xFF},
        {0x80, 0x80, 0x80, 0xFF},
        {0xC0, 0xC0, 0xC0, 0xFF},
        {0x40, 0x40, 0x40, 0xFF},
        {0xFF, 0xA5, 0x00, 0xFF}
    };

    for(int i=0; i<10; i++) {
        insertion(&couleurs[i], &ma_liste);
    }

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);
}

int main() {
    int exercice;
    printf("Choisissez l'exercice à exécuter :\n1. 4.1 - Calcul\n2. 4.2 - Fichier\n3. 4.7 - Liste de couleurs\nVotre choix : ");
    scanf("%d", &exercice);

    switch(exercice) {
        case 1: run_41(); break;
        case 2: run_42(); break;
        case 3: run_47(); break;
        default: printf("Exercice invalide\n");
    }

    return 0;
}
