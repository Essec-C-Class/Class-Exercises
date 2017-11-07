#include <stdio.h>

void echange(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    //int saisie;
    //scanf("%d", &saisie);

    int v1 = 20;
    int v2 = 50;
    echange(&v1, &v2);
    printf("V1: %d, V2: %d ", v1, v2);
}