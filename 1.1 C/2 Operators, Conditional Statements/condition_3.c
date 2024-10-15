#include<stdio.h>

int main(){
    printf("Enter available cash amount: ");
    int cash;
    scanf("%d",&cash);

    if (cash >= 50000){
        printf("Russia ghurte jabo.\n");
        if (cash >= 100000){
            printf("Paris ghurte jabo!\n");
        }
        else{
            printf("Bangladesh chole asbo.\n");
        }
    }
    else{
        printf("Aj gorib bole!");
    }
    return 0;
}