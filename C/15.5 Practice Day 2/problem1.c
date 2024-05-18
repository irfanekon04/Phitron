#include<stdio.h>

int my_abs(int n)
{
    int abs;
    if (n<0)
    {
        abs = n*(-1);
    }
    else
    {
        abs=n;
    }
    return abs;
}
int main()
{
    int n;
    scanf("%d",&n);
    // int ans = my_abs(n);
    // printf("%d",ans);
    printf("%d",my_abs(n));
    return 0;
}