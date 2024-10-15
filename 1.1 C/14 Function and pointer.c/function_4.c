//no return + no parameter

#include<stdio.h>

void sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a+b;
    printf("%d",c);
}

int main()
{
    sum();
    return 0;
}