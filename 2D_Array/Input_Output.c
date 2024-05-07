#include<stdio.h>
int main()
{
    // input
    int a[5][4];
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // output
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}