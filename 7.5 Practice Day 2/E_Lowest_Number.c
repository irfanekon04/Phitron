#include<stdio.h>
#include<limits.h>
int main()
{
    int n,min=INT_MAX ,pos;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]<min){
            min=a[i];
            pos=i+1;  
        }
    }
    printf("%d %d\n",min,pos);
    return 0;
}