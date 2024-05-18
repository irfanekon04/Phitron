#include<stdio.h>
int char_to_ascii(char c)
{
    if (c>='a' && c<='z')
    {
        int val=c;
        return val;
    }
    else if (c>='A' && c<='Z')
    {
        int val=c;
        return val;
    }
    else if (c>='0' && c<='9')
    {
        int val=c;
        return val;
    }
    
}
int main()
{
    char c;
    scanf("%c",&c);
    printf("%d",char_to_ascii(c));
    return 0;
}