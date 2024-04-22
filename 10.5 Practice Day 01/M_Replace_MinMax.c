#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    // find the min value and its position
    int min=INT_MAX;
    int min_pos=0;
    for (int i = 0; i < n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
            min_pos=i;
        }
    }
    // find the max value and its position
    int max=INT_MIN;
    int max_pos=0;
    for (int i = 0; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
            max_pos=i;
        }
    }
    // swapping the max min values.
    int temp=a[min_pos];
    a[min_pos]=a[max_pos];
    a[max_pos]=temp;
    //  printing the array after swaping.
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}