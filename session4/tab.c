#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int basictab(){
    int i;
    int tabx[50];

    tabx[0] = 42;

    for(i=1; i<50; i++){
        tabx[i] = tabx[0]*i;
    }

    for(i=0; i<50; i++){
        printf("Value number %d is %d\n", i, tabx[i]);
    }

}

int pointertab(){
    int tab[5];
    int *pt;
    pt = tab;
    *pt = 5;
    pt[1] = 10;
    *(pt + 6) = 20;
    pt = pt + 1;
    printf("Tab[0] : %d, Tab[1] : %d, , Tab[6] : %d, *Pt: %d", tab[0], tab[1], tab[6], *pt);
}

int multidim(){
    int multitab[10][20][5];

    multitab[0][0][2] = 1;
}

void initTab(){
    int i, j;
    int tab1[4] = {4,3,2,1};
    int tab2[2][3] = {{3,6,9},{2,4,6}};

    srand(time(NULL));

    for (i=0; i<2; i++){
        for(j=0; j<3; j++){
            tab2[i][j] = rand();
        }
    }

    printf("Tab2[1][1] : %d, RandMax: %d", tab2[1][1], RAND_MAX);
}

int main(){
    pointertab();
}