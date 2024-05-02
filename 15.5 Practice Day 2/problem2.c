#include<stdio.h>
int mylen(char *str)
{
    int len=0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}
int main()
{
    char str[]="hello";
    printf("%d",mylen(str));
    return 0;
}