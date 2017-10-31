# include <stdio.h>

int main(){

    int i, nbFois;
    printf("Combien de fois dois-je vous dire Bonjour ?\n");
    scanf("%d", &nbFois);

    for ( i = 1; i <= nbFois;i++){
        printf("Bonjour pour la %d ieme fois.\n", i);
        if(i==13)continue;
        printf("Tour %d\n",i);
    }

}