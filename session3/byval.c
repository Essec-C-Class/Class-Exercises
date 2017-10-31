# include <stdio.h>
int v1 = 30;

int echange(int n1, int n2){
    int tempVal;
    printf("Dans echange v1 vaut %d", v1);
    printf("Avant echange, N1 vaut %d, N2 vaut %d\n", n1 ,n2);
    tempVal = n1;
    n1 = n2;
    n2 = tempVal;
    printf("Après echange, N1 vaut %d, N2 vaut %d\n", n1 ,n2);
    return n1 + n2;
}

int main(){
    int v1, v2;
    printf("Veuillez saisir deux  nombres.\n");
    scanf("%d %d",&v1,&v2);
    printf("Dans main v1 vaut %d", v1);
    echange(v1, v2);
    printf("V1 vaut %d, V2 vaut %d\n", v1 ,v2);
}