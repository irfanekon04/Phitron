#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cash;
    scanf("%d",&cash);
    if (cash > 1000){
        printf("I will buy Punjabi\n");
        if(cash - 1000 >= 500){
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad luck!\n");
    }
    return 0;
}