#include <stdio.h>
#include <string.h>

#define NB_ETUDIANTS 5
#define TAILLE 100

// Définition de la structure Étudiant
struct Etudiant {
    char nom[TAILLE];
    char prenom[TAILLE];
    char adresse[TAILLE];
    float note1;  // Programmation C
    float note2;  // Système d'exploitation
};

int main() {
    struct Etudiant etudiants[NB_ETUDIANTS];

    // Initialisation des étudiants avec strcpy
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Moreau");
    strcpy(etudiants[2].prenom, "Sofia");
    strcpy(etudiants[2].adresse, "15, Rue de Marseille, Paris");
    etudiants[2].note1 = 17.2;
    etudiants[2].note2 = 13.8;

    strcpy(etudiants[3].nom, "Lambert");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "8, Avenue du Pra (modifié)vendredi 21 novembre 2025 15:27
:100:
Clique pour réagir
:joy:
Clique pour réagir
:thumbsup:
Clique pour réagir
Ajouter une réaction
Répondre
Transférer
Plus
[15:23]vendredi 21 novembre 2025 15:23
couleurs.c #include <stdio.h>

#define NB_COULEURS 10

// Définition d'une structure pour représenter une couleur RGBA
struct Couleur {
    unsigned char r; // Rouge
    unsigned char g; // Vert
    unsigned char b; // Bleu
    unsigned char a; // Alpha
};

int main() {
    struct Couleur couleurs[NB_COULEURS] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x00, 0x00, 0x00, 0xff},
        {0xff, 0xff, 0xff, 0xff},
        {0x12, 0x34, 0x56, 0x99},
        {0xab, 0xcd, 0xef, 0xdd},
        {0x10, 0x20, 0x30, 0x40},
        {0x80, 0x00, 0x80, 0xff},
        {0xfa, 0x80, 0x72, 0xff},
        {0x33, 0x66, 0x99, 0xaa}
    };

    printf("===== Liste des couleurs (RGBA) =====\n\n");

    for (int i = 0; i < NB_COULEURS; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u\n", couleurs[i].r);
        printf("Vert  : %u\n", couleurs[i].g);
        printf("Bleu  : %u\n", couleurs[i].b);
        printf("Alpha : %u\n\n", couleurs[i].a);
    }

    return 0;
} (modifié)vendredi 21 novembre 2025 15:26
:100:
Clique pour réagir
:joy:
Clique pour réagir
:thumbsup:
Clique pour réagir
Ajouter une réaction
Répondre
Transférer
Plus

Envoyer un message à @nadir
