#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if (mat[i][i]!=1)
            {
                flag = 0;
                break;
            }
            if (mat[i][col-1-i]!=1)
            {
                flag = 0;
                break;
            }
            if (i==j)
            {
                continue;
            }
            if (i+j==col-1)
            {
                continue;
            }
            if (mat[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
    }
    if (flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}