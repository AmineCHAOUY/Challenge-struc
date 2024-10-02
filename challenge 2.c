#include <stdio.h>
#include <string.h>

#define MAX_NOTES 5

struct etudiant {
    char nom[4];
    char prenom[5];
    char notes[MAX_NOTES];
};

int main() {
    struct etudiant etud1 ={"amine","chaouy",12,13,14,14,18};

    printf("Nom: %s\n", etud1.nom);
    printf("Prénom: %s\n", etud1.prenom);
    printf("Les Notes:\n ");
    for (int i=0; i<MAX_NOTES;i++){
        printf("%d\n",etud1.notes[i]);
    }

    return 0;
}
