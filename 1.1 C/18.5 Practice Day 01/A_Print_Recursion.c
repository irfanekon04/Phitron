#include<stdio.h>
void printRecursion(int i,int n)
{
    if (i > n) return;
    printf("I love Recursion\n");
    printRecursion(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printRecursion(1,n);
    return 0;
}