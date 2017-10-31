# include <stdio.h>

int main(){

    int i, nbFois;
    printf("Combien de fois dois-je vous dire Bonjour ?\n");
    scanf("%d", &nbFois);

    if(nbFois == 13) goto halloween;

    for ( i = 1; i <= nbFois;i++){
        printf("Bonjour pour la %d ieme fois.\n", i);
    }

    return 0;

    halloween:
    printf("Les esprits vont venir vous hanter.");
}