#include<stdio.h>
void print(int n)
{
    for (int i=1;i<=n;i++)
    {
        printf("%d",i);
        if(i<n)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}