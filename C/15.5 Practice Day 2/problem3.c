#include<stdio.h>
int count_odd(int *a,int n)
{
    int count=0;
    for (int i = 0; i <n ;i++)
    {
        if (a[i]%2==1)
        {
            count++;
        }
        
    }
    return count;
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
    printf("%d",count_odd(a,n));
    return 0;
}