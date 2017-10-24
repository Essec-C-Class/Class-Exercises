# include <stdio.h>

int main(){

    int val, som;
    som = 0;

    while(som<100){
        printf("Indiquez une valeur.\n");
        scanf("%d",&val);
        som +=val;
    }

    printf("Votre total vaut %d.\n",som);
}