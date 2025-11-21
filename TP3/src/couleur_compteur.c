#include <stdio.h>

#define N 100

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

int main() {
    Couleur tab[N];
    Couleur distinctes[N];
    int compte[N] = {0};
    int nbDistinctes = 0;
    int trouve;

    // Exemple : initialisation aléatoire simple
    for(int i=0;i<N;i++){
        tab[i].r = i%256;
        tab[i].g = (i*2)%256;
        tab[i].b = (i*3)%256;
        tab[i].a = 255;
    }

    // Comptage des couleurs distinctes
    for(int i=0;i<N;i++){
        trouve = -1;
        for(int j=0;j<nbDistinctes;j++){
            if(tab[i].r==distinctes[j].r &&
               tab[i].g==distinctes[j].g &&
               tab[i].b==distinctes[j].b &&
               tab[i].a==distinctes[j].a){
                trouve = j;
                break;
            }
        }
        if(trouve == -1){
            distinctes[nbDistinctes] = tab[i];
            compte[nbDistinctes] = 1;
            nbDistinctes++;
        } else {
            compte[trouve]++;
        }
    }

    // Affichage des couleurs distinctes et occurrences
    for(int i=0;i<nbDistinctes;i++){
        printf("%02x %02x %02x %02x : %d\n", distinctes[i].r, distinctes[i].g, distinctes[i].b, distinctes[i].a, compte[i]);
    }

    return 0;
}
