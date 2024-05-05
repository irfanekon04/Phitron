#include<stdio.h>
void print1to5(int i)
{
    if (i == 6) return;
    printf("%d ",i);
    print1to5(i+1);
}
int main()
{
    print1to5(1);
    return 0;
}