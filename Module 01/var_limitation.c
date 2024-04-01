#include<stdio.h>
int main()
{
    long long int a = 123445674746484675; //int can assign only -2^32 to +2^32-1, so using long long int for larger numbers
    printf("%lld",a);

    double b=3.141621734234852459825; //double can assign upto  15 digits after decimal point
    printf( "\n%0.15lf",b);
    return 0;
}