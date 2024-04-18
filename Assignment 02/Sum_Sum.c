#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
    }
    int poSum=0,neSum=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]>0)
        {
            poSum+=v[i];
        }
        if (v[i]<0)
        {
            neSum+=v[i];
        }
    }
    printf("%d %d",poSum,neSum);
    return 0;
}