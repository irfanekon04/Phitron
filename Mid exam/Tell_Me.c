#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int n,x;
        scanf("%d",&n);
        int a[n];
        for (int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        scanf("%d",&x);
        int ans=0;
        for(int k=0;k<n;k++)
        {
            if (a[k]==x)
            {
                ans=1;
            }
        }
        if(ans==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    
    return 0;
}