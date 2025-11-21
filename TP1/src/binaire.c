#include <stdio.h>

void afficherBinaire(unsigned int n) {
    int i;
    int taille = sizeof(unsigned int) * 8; // nombre de bits (généralement 32)

    for (i = taille - 1; i >= 0; i--) {
        unsigned int bit = (n >> i) & 1; // décaler et extraire le bit
        printf("%u", bit);
    }
    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres)/sizeof(nombres[0]);

    for(int i = 0; i < taille; i++) {
        printf("%u en binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
