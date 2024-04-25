#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int d2;
        d2=(d-((m1*d)/(m1+m2)));
        printf("%d\n",d2);
    }
    
    return 0;
}