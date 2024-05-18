#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
    scanf("%s %s",a,b);

    // using loop

    // int k=strlen(a);
    // for (int i = 0; i < strlen(b); i++)
    // {
    //     a[k]=b[i];
    //     k++;
    // }

    // using built in function

    strcat(a,b);

    printf("%s",a);
    return 0;
}