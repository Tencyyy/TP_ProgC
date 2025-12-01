#include <stdio.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

void run_41() {
    int a, b;
    char op;
    printf("num1 : "); scanf("%d", &a);
    printf("num2 : "); scanf("%d", &b);
    printf("Opérateur : "); scanf(" %c", &op);

    int result = 0;
    switch (op) {
        case '+': result = addition(a, b); break;
        case '-': result = soustraction(a, b); break;
        case '*': result = produit(a, b); break;
        case '/': result = quotient(a, b); break;
        case '%': result = modulo(a, b); break;
        case '&': result = et_logique(a, b); break;
        case '|': result = ou_logique(a, b); break;
        case '~': result = negation(a); break;
    }
    printf("Résultat : %d\n", result);
}

void run_42() {
    int choix;
    char nom[50], msg[200];

    printf("1. Lire un fichier\n2. Écrire un fichier\nVotre choix : ");
    scanf("%d", &choix);

    printf("Nom du fichier : ");
    scanf("%s", nom);

    if (choix == 1) lire_fichier(nom);
    else {
        printf("Message : ");
        scanf(" %[^\n]", msg);
        ecrire_dans_fichier(nom, msg);
    }
}

void run_47() {
    struct liste_couleurs l;
    init_liste(&l);

    for (int i = 0; i < 10; i++) {
        struct couleur c = { i*20, i*10, i*5, 255 };
        insertion(&c, &l);
    }

    printf("Liste :\n");
    parcours(&l);
}

int main() {
    int choix;
    printf("Choisir exercice (41, 42, 47) : ");
    scanf("%d", &choix);

    if (choix == 41) run_41();
    else if (choix == 42) run_42();
    else if (choix == 47) run_47();
    else printf("Invalide.\n");

    return 0;
}
