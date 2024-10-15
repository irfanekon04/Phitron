#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=(n+5)-((n-1)/2);
    int s=k-1;
    int l=1;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < s;j++)
        {
            printf(" ");
        }
        for (int j = 0; j < l;j++)
        {
            printf("*");
        }
        s--;
        l+=2;
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
