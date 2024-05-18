#include<stdio.h>
int main()
{
    int a,b;
    char s;
    scanf("%d %c %d",&a,&s,&b);
    switch (s) {
        case '<':
            if (a<b)
            {
                printf("Right");
            }
            else  
            {
                printf("Wrong");
            }
            break;
        case '>':
            if (a>b)
            {
                printf("Right");
            }
            else  
            {
                printf("Wrong");
            }
            break;
        case '=':
            if (a==b)
            {
                printf("Right");
            }
            else  
            {
                printf("Wrong");
            }
            break;
        default:
            printf("Invalid sign\n");
            break;
    }
    return 0;
}