#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);

    // using while loop.

    // int i=0;
    // while(1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Same \n");
    //         break;
    //     }
    //     else if(a[i]=='\0')
    //     {
    //         printf("String a small.\n");
    //         break;
    //     }
    //     else if(b[i]=='\0')
    //     {
    //         printf("String b small.\n");
    //         break;
    //     }
    //     if(a[i]==b[i])
    //     {
    //         i++;
    //     }
    //     else if(a[i]<b[i])
    //     {
    //         printf("String a small.\n");
    //         break;
    //     }
    //     else{
    //         printf("String b small.\n");
    //         break;
    //     }
    // }

    // using built in function.

    int ans = strcmp(a,b);
    if (ans < 0 ){
        printf("String a is smaller than String b");
    }
    else if (ans > 0){
        printf("String b is smaller than String a");
    }
    else{
        printf("Both strings are equal");
    }
    return 0;
}