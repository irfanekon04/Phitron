#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += x[i];
    }
    printf("%d",sum);
    return 0;
}