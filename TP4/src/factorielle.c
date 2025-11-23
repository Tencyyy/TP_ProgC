#include <stdio.h>

int factorielle(int num) {
    if (num == 0) return 1;
    return num * factorielle(num - 1);
}

int main() {
    int n;
    printf("Entrez un entier pour calculer sa factorielle : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas définie pour les nombres négatifs.\n");
    } else {
        printf("Factorielle de %d : %d\n", n, factorielle(n));
    }

    return 0;
}
