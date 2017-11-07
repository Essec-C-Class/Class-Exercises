#include <stdio.h>
#include <string.h>

void chardemo(){
    char lettre1 = 'a';
    printf("Ma lettre est %c", lettre1);
}

int textlen(char *text){
    int size = 0;
    while(*text++)size++;
    return size;
}

void charTab(){
    char mot1[20];
    mot1[0]='B';
    mot1[1]='o';
    mot1[2]='n';
    mot1[3]='j';
    mot1[4]='o';
    mot1[5]='u';
    mot1[6]='r';
    mot1[6]='r';
    mot1[7]=0;

    char mot2[] = {'H','e','l','l','o',0};

    char *mot3 = "Salut";

    printf("%c",*mot3);
    printf("Je vous dis %s", mot3);
}

int main(){

    char text1[] = {'S','a','l','u','t',0};
    char *text2;

    strcpy(text2, text1);

    printf("Text2 is now equal to %s", text2);

    //printf("Le code de l'espace est %d",' ');
    //printf("La longueur de mon texte est %d", strlen("ceci est un exemple de texte"));
}