#include<stdio.h>
int main()
{
    int n,k=1;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            printf("*");
        }
        printf("\n");
        k++;
    }
    return 0;
}