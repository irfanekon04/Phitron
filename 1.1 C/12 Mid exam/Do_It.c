#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for (int i = 1; i <= n; i++)
    {
        for (int j=1;j<=k;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}