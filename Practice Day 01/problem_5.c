#include<stdio.h>

int main(){
    int cash;
    printf("Enter the amount of money you have:\n");
    scanf("%d",&cash);
    if (cash >= 10000){
        printf("Gucci Bag\n");
        if (cash > 20000){
            printf("Gucci Belt\n");
        }
        else{}
    }
    else if (cash >= 5000){
        printf("Levis Bag\n");
    }
    else{
        printf("Something");
    }
    return 0;
}