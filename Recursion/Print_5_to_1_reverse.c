#include<stdio.h>
void printreverse(int i)
{
    if (i == 6) return;
    printreverse(i+1);
    printf("%d ", i);
    
}
int main()
{
    printreverse(1);
    return 0;
}