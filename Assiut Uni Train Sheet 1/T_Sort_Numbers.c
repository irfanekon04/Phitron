#include<stdio.h>
int main()
{
    int a,b,c,min,mid,max;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            max = a;
            if (b>c)
            {
                mid = b;
                min = c;
            }
            else
            {
                mid = c;
                min = b;
            }
            
        }
        else
        {
            max = c;
            mid = a;
            min = b;
        }
    }
    else if (a>c)
    {
        max = b;
        mid = a;
        min = c;
    }
    else
    {
        min = a;
        if (b>c)
        {
            max = b;
            mid = c;
        }
        else
        {
            max = c;
            mid = b;
        }
    }
    

    printf("%d\n%d\n%d\n\n",min,mid,max);
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}