#include<stdio.h>
int main()
{
    int n,i,num;
    scanf("%d",&n);
    num=n/4-3;
    for (i=0;i<4;i++) 
    {
        printf("%d ",num+i*2);
    }
    return 0;
}