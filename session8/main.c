#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    char url[400];

    FILE *instructionFile;
    char instruction[200];
    instructionFile = fopen("instruction.instr", "rb");
    fgets(instruction,200,instructionFile);
    fclose(instructionFile);

    FILE * tokenFile;
    char token[60];

    system("wget --no-check-certificate --save-cookies=cookie.txt https://finance.yahoo.com/quote/GOOG/?p=GOOG -O crumb.store");
    system(instruction);

    printf("Token Saved\n");

    tokenFile = fopen("crumb.token", "rb");
    fgets(token,60,tokenFile);

    printf("Token is %s\n", token);
    
    sprintf(url, "wget --no-check-certificate --load-cookies=cookie.txt \"https://query1.finance.yahoo.com/v7/finance/download/GOOG?period1=1477954800&period2=1511996400&interval=1d&events=history&crumb=%s\" -O GOOG.csv", token);
    system(url);

    fclose(tokenFile);

    return EXIT_SUCCESS;
}
