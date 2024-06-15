#include<stdio.h>
int main()
{
    int n,s,k=1;
    scanf("%d",&n);
    s=n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j=0;j<s;j++)
        {
            printf(" ");
        }
        for (int l=0;l<k;l++)
        {
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");
    }
    
    return 0;
}