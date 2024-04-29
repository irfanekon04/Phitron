#include<stdio.h>
char small_to_capital(char c)
{
    if (c>='a' && c<='z')
    {
        char cap=c-32;
        return cap;
    }
    
}
int main()
{
    char c;
    scanf("%c",&c);
    printf("%c",small_to_capital(c));
    return 0;
}