#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",&a,&b);
    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s%s\n",a,b);
    char tmp = a[0];
    a[0]=b[0];
    b[0] =tmp;
    printf("%s %s\n",a,b);
    return 0;
}