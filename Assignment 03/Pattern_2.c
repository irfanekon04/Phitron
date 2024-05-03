#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
    k=1;
    s=n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        
        for (int j = k; j >= 1; j--)
        {
            printf("%d",j);
        }
        k++;
        s--;
        printf("\n");
    }
    
    return 0;
}