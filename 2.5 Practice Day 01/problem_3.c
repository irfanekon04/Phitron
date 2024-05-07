#include<stdio.h>

int main()
{
    printf("Please enter a non-negative integer: \n");
    int x;
    scanf("%d",&x);
    if (x % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}