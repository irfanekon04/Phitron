#include<stdio.h>
int main()
{
    int x,y,mina,rina;
    scanf("%d %d",&x,&y);
    rina=(x-y)/2;
    mina=rina+y;
    printf("%d %d\n",mina,rina);
    return 0;
}