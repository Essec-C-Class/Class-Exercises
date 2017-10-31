# include <stdio.h>

//<3 0% de réduction
//>=3 et <= 6 20% de réduction
// 7>= et 10 <= 30%
// >10 50%
float reduc(int);
void message(void);

int main(){
    int nbUnit;
    printf("Combien de chaussettes voulez-vous commander ?");
    scanf("%d", &nbUnit);
    printf("Votre pourcentage de réduction pour cet achat sera de %d%%",
        (int) (100 * reduc(nbUnit)));
    message();
}

float reduc(int unit){
    if(unit>10){
        return 0.5;
    } else if (unit>6){
        return 0.3;
    } else if (unit>2) {
        return 0.2;
    } else {
        return 0;
    }
}

void message(){
    printf("Ceci est un message secret qui ne doit être lu par personne.");
}