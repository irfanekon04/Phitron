#include<stdio.h>
#include<string.h>
int main()
{
    char s;
    int count[26]={0};
    while (scanf("%c",&s)!=EOF)
    {
        count[s-'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (count[i]!= 0)
        {
            printf("%c : %d\n",i+'a',count[i]);
        }
        
    }
    return 0;
}