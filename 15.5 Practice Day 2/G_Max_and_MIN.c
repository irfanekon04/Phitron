#include<stdio.h>
#include<limits.h>
void minmax(void)
{
    int n;
    scanf("%d",&n);
    int max=0;
    int min=100000;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("%d %d",min,max);

}
int main()
{
    minmax();
    return 0;
}