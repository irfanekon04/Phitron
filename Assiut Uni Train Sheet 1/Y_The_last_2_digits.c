#include<stdio.h>
int main()
{
    long long int a,b,c,d,mul,mod;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    mul=a*b*c*d;
    mod=mul%100;
    if (mod<10)
    {
        printf("0%lld",mod);
    }
    else{
        printf("%lld",mod);
    }
    return 0;
}