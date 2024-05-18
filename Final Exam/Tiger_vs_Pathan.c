#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",&s);
        int cntT=0,cntP=0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i]=='T')
            {
                cntT++;
            }
            else if (s[i]=='P')
            {
                cntP++;
            }
        }
        if (cntP>cntT)
        {
            printf("Pathaan\n");
        }
        else if (cntT>cntP)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    
    return 0;
}