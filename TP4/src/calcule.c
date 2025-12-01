#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Usage: ./calcule <op> <num1> <num2>\n");
        return 1;
    }

    char op = argv[1][0];
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
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
        default:
            printf("Opérateur invalide.\n");
            return 1;
    }

    printf("Résultat : %d\n", result);
    return 0;
}
