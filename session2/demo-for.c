# include <stdio.h>

int main(){

    int i, nbFois;
    printf("Combien de fois dois-je vous dire Bonjour ?\n");
    scanf("%d", &nbFois);

    for ( i = 1; i <= nbFois;){
        printf("Bonjour pour la %d ieme fois.\n", i);
    }

}