# include <stdio.h>

int main(){

    int limite;

    printf("Indiquez une valeur limite.\n");
    scanf("%d", &limite);
    
    switch(limite){
        case 0 ... 10 :
            printf("La valeur nulle est interdite.\n");
            break;
        case 20 :
            printf("C'est ma valeur préférée.\n");
            break;
        case 30 :
            printf("Tip top.\n");
            break;
        default :
            printf("Mouai bof.\n");
    }
}