#include<stdio.h>
int main()
{
    int n,i,num;
    scanf("%d",&n);
    num=n/5-4;
    for (i=0;i<5;i++) 
    {
        printf("%d ",num+i*2);
    }
    return 0;
}