# include <stdio.h>

int main(){

    int limite;

    printf("Indiquez une valeur limite.\n");
    scanf("%d", &limite);
    
    if (limite < 20) {
        printf("La valeur trop petite.\n");
    } else if(limite == 20) {
        printf("La valeur est juste valable.\n");
    } else {
        printf("La valeur %d est parfaite.\n", limite);
    }
    scanf("%s");
}