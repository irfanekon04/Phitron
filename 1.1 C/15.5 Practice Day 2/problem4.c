#include<stdio.h>
void change_it(int *a,int n)
{
    a[n-1]=100;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    change_it(a,n);
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}