#include<stdio.h>
//return type + parameters
int sum(int a,int b)
{
    int sum= a + b;
    return sum;
}
int main()
{
    int ans=sum(400,500);
    printf("%d",ans);
    return 0;
}