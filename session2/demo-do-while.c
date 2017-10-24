# include <stdio.h>

int main(){

    int limite;

    do {
        printf("Indiquez une valeur > 0 SVP.\n");
        scanf("%d", &limite);
        printf("Vous avez choisi %d.\n", limite);

    } while(limite < 0);

    printf("Merci pour ce choix.\n");
}