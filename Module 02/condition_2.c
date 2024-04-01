#include<stdio.h>

int main()
{
    int cash;
    printf("Enter your cash amount: ");
    scanf("%d",&cash);

    if (cash >= 5000)
    {
        printf("You can buy a new Panjabi.\n");
    }
    else if (cash >= 4000)
    {
        printf("You can buy a new T-shirt.\n");
    }
    else if(cash >= 3000)
    {
        printf("You can buy a new Chino.\n");
    }
    else
    {
        printf("Dhur hala, Goriber Baccha Gorib!");
    }
    
    return 0;
}