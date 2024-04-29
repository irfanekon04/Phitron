#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=0;
    k=(2*n)-1;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for (int j = 0; j<k; j++)
        {
            printf("*");
        }
        printf("\n");
        s++;
        k-=2;
    }
    
    return 0;
}