#include <stdio.h>



struct Rectangle {
    float longueur;
    float largeur;

};
float calculer(struct Rectangle rec){

return rec.longueur * rec.largeur;
}




int main() {
    struct Rectangle recc;
    recc.longueur=4,5;
    recc.largeur=4,6;
    float t =calculer(recc);
    printf("%f",t);

    return 0;
}
