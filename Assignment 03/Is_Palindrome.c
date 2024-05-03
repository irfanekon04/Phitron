#include<stdio.h>
#include<string.h>
long long int is_palindrome(char *s)
{
    int ans=1;
    int i=0,j=strlen(s)-1;
    while (i<j)
    {
        if (s[i]!=s[j])
        {
            ans=0;
        }
        i++;
        j--;
    }
    return ans;
}
int main()
{
    char s[1001];
    scanf("%s",s);
    long long int ans = is_palindrome(s);
    if (ans==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}