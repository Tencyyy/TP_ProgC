#include <stdio.h>
#include <stdlib.h>

#define N 100  // Nombre total de couleurs dans le tableau

// Structure pour représenter une couleur RGBA
typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Couleur;

// Structure pour stocker les couleurs distinctes et leur compteur
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

// Fonction pour comparer deux couleurs (retourne 1 si identiques, 0 sinon)
int comparerCouleur(Couleur a, Couleur b) {
    return (a.R == b.R && a.G == b.G && a.B == b.B && a.A == b.A);
}

int main() {
    Couleur tableau[N];
    CouleurDistincte distinctes[N];
    int nbDistinctes = 0;

    // Générer aléatoirement 100 couleurs
    for (int i = 0; i < N; i++) {
        tableau[i].R = rand() % 256;
        tableau[i].G = rand() % 256;
        tableau[i].B = rand() % 256;
        tableau[i].A = rand() % 256;
    }

    // Compter les couleurs distinctes
    for (int i = 0; i < N; i++) {
        int trouve = 0;
        for (int j = 0; j < nbDistinctes; j++) {
            if (comparerCouleur(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nbDistinctes].couleur = tableau[i];
            distinctes[nbDistinctes].compteur = 1;
            nbDistinctes++;
        }
    }

    // Afficher les couleurs distinctes avec leur nombre d'occurrences
    for (int i = 0; i < nbDistinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.R,
               distinctes[i].couleur.G,
               distinctes[i].couleur.B,
               distinctes[i].couleur.A,
               distinctes[i].compteur);
    }

    return 0;
}
