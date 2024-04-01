#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if (x>0)
    {
        printf("positive\n");
    }
    else if (x<0)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero\n");
    }
    return 0;
}