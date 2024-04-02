#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    float div = (float)a/(float)b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,mul);
    printf("%d / %d = %0.2f\n",a,b,div);

    return 0;
}