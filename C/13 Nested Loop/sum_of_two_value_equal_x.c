#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n ; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int flag=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]+a[j]==x)
            {
                flag=1;
            }
            
        }
        
    }
    if (flag==1)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}