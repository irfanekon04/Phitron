#include<stdio.h>
int main()
{
    int n,rev;
    scanf("%d",&n);
    rev=0;
    while (n>0)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }
    printf("%d",rev);
    return 0;
}