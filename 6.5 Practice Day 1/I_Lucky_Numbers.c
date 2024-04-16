#include<stdio.h>
int main()
{
    int a,firstDig,lastDig;
    scanf("%d",&a);
    firstDig=a%10;
    lastDig=a/10;
    if (firstDig%lastDig==0 || lastDig%firstDig==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}