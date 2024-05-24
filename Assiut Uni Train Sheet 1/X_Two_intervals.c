#include<stdio.h>
int main()
{
    int l1,l2,r1,r2,l3,r3;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    if (l1<=r2 && l2<=r1)
    {
        if (l1>l2){
            l3 = l1;
        }
        else{
            l3 = l2;
        }
        if (r1 < r2)
        {
            r3 = r1;
        }
        else
        {
            r3 = r2;
        }
        
        printf("%d %d",l3,r3);
    }
    
    else
    {
        printf("-1");
    }
    
    return 0;
}