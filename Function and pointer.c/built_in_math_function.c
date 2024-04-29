#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x;
    scanf("%lf",&x);
    //ceil
    int ans=ceil(x);
    printf("ceil- %d\n" ,ans);
    
   //floor  
    int ans1=floor(x);
    printf("floor -%d\n",ans1);
    //round 
    int ans2=round(x);
    printf("round-%d\n",ans2);
    //sqrt
    float ans3=sqrt(x);
    printf("sqrt-%f\n",ans3);
    //abs
    int ans4=abs(x);
    printf("abs-%d\n",ans4);
    return 0;
}