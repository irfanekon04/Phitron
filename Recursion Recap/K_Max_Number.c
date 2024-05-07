#include<stdio.h>
#include<limits.h>
int max(int a[],int n,int i)
{
    if (i==n) return INT_MIN;
    int ans=max(a,n,i+1);
    if (a[i]>ans)
    {
        return a[i];
    }
    else{
        return ans;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans = max(a,n,0);
    printf("%d",ans);
    return 0;
}