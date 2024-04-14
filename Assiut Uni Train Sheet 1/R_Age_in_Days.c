#include<stdio.h>
int main()
{
    int age,year,month,day;
    scanf("%d",&age);
    year=age/365;
    month=age%365/30;
    day=age%365%30;

    printf("%d years\n%d months\n%d days",year,month,day);
    return 0;
}