#include <stdio.h>
#include <string.h>

int main() {
struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};
    struct Livre monLivre = {"la boite a marveilles", "Ahmad sefrioui ", 1952};

    printf("Titre: %s\n", monLivre.titre);
    printf("Auteur: %s\n", monLivre.auteur);
    printf("Année: %d\n", monLivre.annee);

    return 0;
}
