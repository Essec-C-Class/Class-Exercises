#include <stdio.h>



void ex1(){
    float a, b, res;
    char ch;
    printf("Veuillez saisir 2 valeurs décimales.");
    while(scanf("%f %f", &a, &b) != 2 ){
        while((ch = getchar()) != '\n');
        printf("SVP reessayez la saisie.\n");
    }
    res = (a - b) / (a * b);
    printf("Les valeurs saisies sont %f et %f, le résultat du calcul est %f", a, b, res);

}

void ex2(){
    int saisie, nbPair, nbImpair, somPair, somImpair;
    char ch;
    nbPair=nbImpair=somPair=somImpair=0;

    do{
        
        printf("Veuillez saisir une valeur entière.");
        if(scanf("%d",&saisie)!=1){
            while((ch = getchar()) != '\n');
            continue;
        }
        if(saisie % 2){
            nbImpair++;
            somImpair += saisie; 
        } else if(saisie>0) {
            nbPair++;
            somPair += saisie; 
        }
    } while (saisie!=0);
    printf("Le nombre de valeurs paires est %d, la moyenne de ces valeurs est %f.\n", nbPair, nbPair ? (float)somPair/(float)nbPair : 0);
    printf("Le nombre de valeurs impaires est %d, la moyenne de ces valeurs est %f.\n", nbImpair, nbImpair ? (float)somImpair/(float)nbImpair : 0);

}

void ex3(){
    int heures, salaireHor = 10, maxHeures = 35;
    float heureSup = 1.5, salaireBrut, salaireNet;
    char ch;

    printf("Veuillez saisir un entier représentant le nombre d'heures travaillées.\n");
    while(scanf("%d", &heures) != 1 ){
        while((ch = getchar()) != '\n');
        printf("SVP reessayez la saisie.\n");
    }

    if(heures>maxHeures){
        salaireBrut = (float) salaireHor * (maxHeures + (heures - maxHeures) * heureSup);
    } else {
        salaireBrut = (float) heures * salaireHor;
    }

    if(salaireBrut <= 300){
        salaireNet = salaireBrut * 0.85;
    } else if( salaireBrut <= 450) {
        salaireNet = salaireBrut - 45  - 0.2 * (salaireBrut - 300);
    } else {
        salaireNet = salaireBrut - 75  - 0.25 * (salaireBrut - 450);
    }

    printf("Mon salaire brut est de %.2f, mon salaire net de  %.2f et mes charges de  %.2f.\n", salaireBrut, salaireNet, salaireBrut - salaireNet);
}

void ex4(){

    float qA=0, qB=0, qC=0, qTotal, qSaisie, facture, fraisPort;
    char ch;
    printf("Veuillez saisir le type de légume ( a pour artichauts, b pour betteraves et c pour carottes).\nq pour quitter.");
    while(scanf("%c",&ch) && ch != 'q'){
        switch(ch){
            case 'a':
                printf("Combien de kg d'artichauts voulez vous ?");
                if(scanf("%f", &qSaisie)!=1){
                    printf("Votre saisie de quantité est fausse.");
                }else{
                   qA += qSaisie; 
                }
                break;
            case 'b':
                printf("Combien de kg de betteraves voulez vous ?");
                if(scanf("%f", &qSaisie)!=1){
                    printf("Votre saisie de quantité est fausse.");
                }else{
                    qB += qSaisie;
                }
                break;
            case 'c':
                printf("Combien de kg de carottes voulez vous ?");
                if(scanf("%f", &qSaisie)!=1){
                    printf("Votre saisie de quantité est fausse.");
                }else{
                    qC+= qSaisie;
                }
                break;
            default:
                printf("Votre choix n'est pas correct.");
        }
        while((ch = getchar()) != '\n');
        printf("Veuillez saisir le type de légume ( a pour artichauts, b pour betteraves et c pour carottes).\nq pour quitter.");
    }

    facture = qA * 2.5 + qB * 2.1 + qC * 1.8;
    if(facture>100)facture = facture * 0.95;

    qTotal = qA + qB + qC;

    if(qTotal >10){
        fraisPort = 8 + 0.2 * qTotal;
    }else if (qTotal >3){
        fraisPort = 10;
    }else{
        fraisPort = 4;
    }

    printf("Votre commande de %.1f kg d'artichauts, %.1f kg de betteraves et %.1f kg de carottes, vaut %.2f euros dont %.2f euros de frais de port.\n", qA, qB, qC, facture + fraisPort, fraisPort);

}

void ex5(char ch, int nbCh, int nbLigne){
    int indexCh = 0, indexLigne = 0;
    for(indexLigne =0 ; indexLigne < nbLigne; indexLigne ++){
        for( indexCh = 0 ; indexCh < nbCh; indexCh++){
            printf("%c",ch);
        }
        printf("\n");
    }
}

int main(){
    ex5('z', 10, 3);
}