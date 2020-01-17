#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(a[0][0]==0&&a[0][1]==0&&a[0][2]==0)
    {
        printf("True\n");
    }
    else if(a[1][0]==0&&a[1][1]==0&&a[1][2]==0)
    {
        printf("True\n");
    }
    else if(a[2][0]==0&&a[2][1]==0&&a[2][2]==0)
    {
        printf("True\n");
    }
    else if(a[0][0]==1&&a[0][1]==1&&a[0][2]==1)
    {
        printf("True\n");
    }
    else if(a[1][0]==1&&a[1][1]==1&&a[1][2]==1)
    {
        printf("True\n");
    }
    else if(a[2][0]==1&&a[2][1]==1&&a[2][2]==1)
    {
        printf("True\n");
    }
    else if(a[0][0]==0&&a[1][0]==0&&a[2][0]==0)
    {
        printf("True\n");
    }
    else if(a[0][1]==0&&a[1][1]==0&&a[2][1]==0)
    {
        printf("True\n");
    }
    else if(a[0][2]==0&&a[1][2]==0&&a[2][2]==0)
    {
        printf("True\n");
    }
    else if(a[0][0]==1&&a[1][0]==1&&a[2][0]==1)
    {
        printf("True\n");
    }
    else if(a[0][1]==1&&a[1][1]==1&&a[2][1]==1)
    {
        printf("True\n");
    }
    else if(a[0][2]==1&&a[1][2]==1&&a[2][2]==1)
    {
        printf("True\n");
    }
    else if(a[0][0]==0&&a[1][1]==0&&a[2][2]==0)
    {
        printf("True\n");
    }
    else if(a[2][0]==0&&a[1][1]==0&&a[2][0]==0)
    {
        printf("True\n");
    }
    else if(a[0][0]==1&&a[1][1]==1&&a[2][2]==1)
    {
        printf("True\n");
    }
    else if(a[2][0]==1&&a[1][1]==1&&a[2][0]==1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
