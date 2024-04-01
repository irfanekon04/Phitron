#include<stdio.h>
int main()
{
    int a = 10;
    int b = 15;

    int sum = a + b;
    printf("%d\n",sum);

    int sub = b - a;
    printf(" %d\n",sub);

    int  mul = a * b;
    printf("%d\n",mul);

    float divide =  (float)a /(float)b ;
    printf("%f\n",divide);

    int x = 5, y=2;
    int modulus = x % y;
    printf("%d",modulus);

    return 0;
}