#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        char s[10001];
        scanf("%s",s);
        int cnt1=0,cnt2=0,cnt3=0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i]>='A' && s[i]<='Z')
            {
                cnt1++;
            }
            else if (s[i]>='a' && s[i]<='z')
            {
                cnt2++;
            }
            else
            {
                cnt3++;
            }
            
        }
        printf("%d %d %d\n",cnt1,cnt2,cnt3);
    }
    return 0;
}