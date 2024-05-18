#include<stdio.h>
int main()
{
    int m,n,gift,remain;
    scanf("%d %d",&m,&n);
    gift=m/n;
    remain=m%n;
    printf("%d %d",gift,remain);
    return 0;
}