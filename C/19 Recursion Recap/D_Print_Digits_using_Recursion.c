#include<stdio.h>
void digPrint(int n)
{
    if (n==0) return;
    int digits=n%10;
    digPrint(n/10);
    printf("%d ",digits);
}
int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i = 0; i < tc; i++)
    {
    int n;
    scanf("%d",&n);
    digPrint(n);
    printf("\n");
    }
    return 0;
}