#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sumPrimary=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumPrimary += a[i][j];
            }
        }
    }
    int sumSecondary=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j == n-1)
            {
                sumSecondary += a[i][j];
            }
        }
    }
    int absDif = abs(sumPrimary-sumSecondary);
    printf("%d",absDif);
    return 0;
}