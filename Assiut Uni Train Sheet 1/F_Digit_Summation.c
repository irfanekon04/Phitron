#include<stdio.h>
 
int main()
{
    long long int m,n;
    int digit1,digit2,sum;
    scanf("%lld %lld",&m,&n);
    digit1 = m % 10;
    digit2 = n % 10;
    sum = digit1 + digit2;
    printf("%d",sum);
    return 0;
}