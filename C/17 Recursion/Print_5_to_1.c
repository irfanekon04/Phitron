#include<stdio.h>
void print5to1(int i)
{
    if (i == 0) return;
    printf("%d ",i);
    print5to1(i-1);
}
int main()
{
    print5to1(5);
    return 0;
}