#include<stdio.h>
//no return + parameters
void sum(int a, int b)
{
    int c=a+b;
    printf("%d",c);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    return 0;
}