#include<stdio.h>
long long int summation(long long int a[],int n,int i)
{
    if (i == n) return 0;
    long long int sum=summation(a,n,i+1);
    return sum+a[i];
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int ans = summation(a,n,0);
    printf("%lld",ans);
    return 0;
}