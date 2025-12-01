#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(struct liste_couleurs *l) {
    l->premier = NULL;
}

void insertion(struct couleur *c, struct liste_couleurs *l) {
    struct noeud *n = malloc(sizeof(struct noeud));
    n->c = *c;
    n->suivant = l->premier;
    l->premier = n;
}

void parcours(struct liste_couleurs *l) {
    struct noeud *tmp = l->premier;
    while (tmp) {
        printf("Couleur : R=%02X G=%02X B=%02X A=%02X\n",
                tmp->c.r, tmp->c.g, tmp->c.b, tmp->c.a);
        tmp = tmp->suivant;
    }
}
