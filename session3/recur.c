#include <stdio.h>
long fac(int n){
    if(n>1) return n * fac(n-1);
    else return 1;
}

int main(){
    int n;
    printf("Veuillez entrer un nombre entier.\n");
    scanf("%d", &n);
    printf("La valeur factorielle de %d est %d.\n", n, fac(n));
}