#include<stdio.h>
#include<string.h>
 
int main()
{
    char F1[10000],F2[10000],S1[10000],S2[10000];
    scanf("%s %s",&F1,&S1);
    scanf("%s %s",&F2,&S2);
    if (strcmp(S1,S2) == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}