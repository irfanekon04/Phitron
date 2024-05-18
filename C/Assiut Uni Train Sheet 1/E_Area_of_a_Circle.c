#include<stdio.h>
 
int main()
{
    double r,area,pi;
    scanf("%lf",&r);
    pi = 3.141592653;
    area = pi*r*r;
    printf("%0.9f",area);
    return 0;
}