#include<stdio.h>
int main()
{
    int a,b,c;
    char s,q;
    scanf("%d %c %d %c %d",&a,&s,&b,&q,&c);
    switch (s) {
        case '+':
            if (a+b==c)
            {
                printf("Yes");
            }
            else  
            {
                int ans=a+b;
                printf("%d",ans);
            }
            break;
        case '-':
            if (a-b==c)
            {
                printf("Yes");
            }
            else  
            {
                int ans=a-b;
                printf("%d",ans);
            }
            break;
        case '*':
            if (a*b==c)
            {
                printf("Yes");
            }
            else  
            {
                int ans=a*b;
                printf("%d",ans);
            }
            break;
        default:
            printf("Invalid sign\n");
            break;
    }
    return 0;
}