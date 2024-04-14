#include<stdio.h>
 
int main()
{
    long long int a,b,c,d,dif;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    dif=(a*b)-(c*d);
    printf("Difference = %lld\n",dif);
    return 0;
}