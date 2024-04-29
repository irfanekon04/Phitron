#include<stdio.h>
//return type + no parameters
int sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s= a + b;
    return s;
}
int main()
{
    int ans=sum();
    printf("%d",ans);
    return 0;
}