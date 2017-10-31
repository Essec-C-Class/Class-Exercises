// Demander à l'utilisateur de saisir un nombre entier
// et déterminer si il est premier
# include <stdio.h>

int main(){

    long valTest, valDiv;
    do {
        printf("Saisir une valeur entiere superieure a 2 :");
        scanf("%d", &valTest);
    } while (valTest <= 2);
    
    valDiv = 2;

    while((valTest % valDiv) && valDiv <= valTest) valDiv++;

    if( valDiv == valTest) {
        printf("\nLe nombre %d est premier.", valTest);
    }else{
        printf("\nLe nombre %d n'est pas premier, il est divisible par %d.",
            valTest, valDiv);
    }

}