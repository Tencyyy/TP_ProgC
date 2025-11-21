#include <stdio.h>

#define N 10
#define MAX 100

int main() {
    char phrases[N][MAX] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char chercher[MAX];
    int trouve = 0;

    printf("Entrez la phrase à chercher : ");
    fgets(chercher, MAX, stdin);

    // Retirer le '\n' éventuel
    for(int k=0; chercher[k]; k++) {
        if(chercher[k]=='\n') { chercher[k]='\0'; break; }
    }

    for(int i=0; i<N; i++){
        int j=0;
        while(phrases[i][j] && phrases[i][j]==chercher[j]) j++;
        if(phrases[i][j]==chercher[j]){
            trouve = 1;
            break;
        }
    }

    if(trouve)
        printf("Phrase trouvée\n");
    else
        printf("Phrase non trouvée\n");

    return 0;
}
