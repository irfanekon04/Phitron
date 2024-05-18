#include<stdio.h>
int main()
{
    char a;
    scanf( "%c", &a);
    if (a<='z' && a>='a'){
        a-=32;
        printf("%c",a);
    }
    else{
        a+=32;
        printf("%c",a);
    }
    return 0;
}
