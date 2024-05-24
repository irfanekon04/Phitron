#include<stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    if ((int)n == n)
    {
        printf("int %d",(int)n);
    }
    else
    {
        int int_part = (int)n;
        float frac_part = (n - int_part);
        printf("float %d %0.3f\n",int_part,frac_part);
    }
    
    return 0;
}