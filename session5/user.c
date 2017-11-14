#include <stdio.h>

int getUserSettings(int *age){
    printf("Please enter your age.\n");
    scanf("%d", age);
    return *age;
}