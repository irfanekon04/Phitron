#include<stdio.h>
int vowel(char str[],int i)
{
    if (str[i]=='\0') return 0;
    int count=vowel(str,i+1);
    if (str[i]>= 'A' && str[i] <= 'Z')
    {
        str[i]+=32;
    }
    if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
        return count+1;
    }
    else
    {
        return count;
    }

}
int main()
{
    char str[201];
    fgets(str,201,stdin);
    int count = vowel(str,0);
    printf("%d",count);
    return 0;
}