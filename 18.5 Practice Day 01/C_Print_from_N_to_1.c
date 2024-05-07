#include<stdio.h>
void printRecursion(int n,int i)
{
    if (n < i) return;
    printf("%d",n);
    if (n > i)
    {
        printf(" ");
    }
    printRecursion(n-1,i);
}
int main()
{
    int n;
    scanf("%d",&n);
    printRecursion(n,1);
    return 0;
}