#include<stdio.h>
long long int d(long long int m,long long int a,long long int b,long long int c)
{
    long long int x = m / (a*b*c);
    if ((x*a*b*c) == m)
    {
        return x;
    }
    return -1;
}
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        long long int a,b,c;
        long long int m;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        printf("%lld\n",d(m,a,b,c));
    }
    return 0;
}