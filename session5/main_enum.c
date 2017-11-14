#include <stdio.h>
typedef enum {rose, jonquille, paquerette, lila} fleur;
char fleurs[4][11] = {"rose","jonquille","paquerette","lila"};
fleur fleur1, fleur2;

int main(){
    fleur1 = rose;
    fleur2 = lila;
    printf("Fleur 1 is %s",fleurs[10]);
    printf("Flower 1 is %d, Flower 2 is %d", fleur1, fleur2);
}


