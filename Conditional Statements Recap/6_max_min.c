#include<stdio.h>
int main()
{
    int a,b,c,largest,smallest;
    scanf("%d %d %d",&a,&b,&c);
    //max
    if(a>=b && a>=c){
        largest=a;
    }
    else if (b>=c && b>=a){
        largest=b;
    }
    else{
        largest=c;
    }
    //min
    if(a<=b && a<=c){
        smallest=a;
    }
    else if (b<=c && b<=a){
        smallest=b;
    }
    else{
        smallest=c;
    }
    printf("%d %d",smallest,largest);
    return 0;
}