#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int count[7]={0};
    for (int i = 0; i < n; i++)
    {
        int value=a[i];
        count[value]++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d - %d\n",i,count[i]);
    }
    
    return 0;
}