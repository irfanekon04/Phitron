#include<stdio.h>
 
int main()
{
    int a;
    long long int b;
    char c;
    float d;
    double e;
    scanf("%d %lld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%lld\n%c\n%0.2f\n%0.1f",a,b,c,d,e);
    return 0;
}