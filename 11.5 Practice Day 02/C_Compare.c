#include<stdio.h>
#include<string.h>

int main()
{
    char x[21],y[21];
    scanf("%s\n %s",x,y);
    int ans= strcmp(x,y);
    if (ans<0)
    {
        printf("%s\n",x);
    }
    else if (ans>0)
    {
        printf("%s\n",y);
    }
    else
    {
        printf("%s\n",x);
    }
    
    return 0;
}