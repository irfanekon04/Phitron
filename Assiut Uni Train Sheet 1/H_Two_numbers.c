#include<stdio.h>
#include<math.h>
 
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("floor %0.0f / %0.0f = %0.0f\n",a,b,floor(a/b));
    printf("ceil %0.0f / %0.0f = %0.0f\n",a,b,ceil(a/b));
    printf("round %0.0f / %0.0f = %0.0f\n",a,b,round(a/b));
    return 0;
}
