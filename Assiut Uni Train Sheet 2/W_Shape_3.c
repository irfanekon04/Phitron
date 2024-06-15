#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for (int i = 0; i <(2*n) ; i++)
    {
        for (int j=0;j<s;j++)
        {
            printf(" ");
        }
        for (int l=0;l<k;l++)
        {
            printf("*");
        }
        if (i<n-1)
        {
            s--;
            k+=2;
        }
        
        else if (i>n-1)
        {
            s++;
            k-=2;
        }
        printf("\n");
    }
    
    return 0;
}