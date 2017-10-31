# include <stdio.h>
# include <stdarg.h>

int moyenne(int nbArg, ...){
    int i, cVal, somme;
    va_list adpar;
    va_start(adpar, nbArg);
    somme = 0;
    for(i=1; i<=nbArg; i++){
        cVal = (int)va_arg(adpar,int);
        printf("La valeur numero %d vaut %d\n",i, cVal);
        somme += cVal;
    }
    printf("Somme : %d, Nb Val : %d", somme, nbArg);
    return somme / nbArg;
}

int main(){

    printf("La moyenne de la classe est de %d.",moyenne(6,12,13,16,18,19,7));
}