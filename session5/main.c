#include <stdio.h>
#include <string.h>
//Programme qui vous demande de saisir un verbe du premier
//groupe et qui vous donne sa conjugaison au présent de
//l'indicatif

int main(){
    int i;
    char verbe[20];
    char *verbeFin;
    char *pronoms[6] = {"Je", "Tu", "Il", "Nous", "Vous", "Ils"};
    char *conjug[6] = {"e", "es", "e", "ons","ez","ent"};

    do{
        printf("Veuillez saisier un verbe du premier groupe.\n");
        scanf("%s", verbe);
        verbeFin = verbe + strlen(verbe) - 2;
    }while(strcmp(verbeFin,"er"));

    printf("L'indicatif présent de %s est :\n", verbe);
    //*verbeFin = 0;
    for(i=0; i<6; i++){
        strcpy(verbeFin, conjug[i]);
        printf("%s %s\n", pronoms[i], verbe);
    }

}