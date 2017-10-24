# include <stdio.h>

int main(){

    int note, som, nbNote;
    float moyenne;

    som = 0;
    nbNote = 0;

    do {
        printf("Indiquez une note SVP.\n 0 pour arrêter.");
        scanf("%d", &note);
        printf("Vous avez indiqué %d.\n", note);
        som += note;
        nbNote++;
    } while(note != 0);

    moyenne = (float)som / (float)(nbNote-1);

    printf("Lamoyenne des notes est %f", moyenne);

}