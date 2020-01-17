#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    float a[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&a[i][0],&a[i][1]);
        a[i][0]=a[i][0]-10;
        a[i][1]=a[i][1]-10;
    }
    float k;
    int score[n];
    for(i=0;i<n;i++)
    {
        k=a[i][0]*a[i][0]+a[i][1]*a[i][1];
        if(k<=1)
        {
            score[i]=10;
        }
        else if(k<=4)
        {
            score[i]=9;
        }
        else if(k<=9)
        {
            score[i]=8;
        }
        else if(k<=16)
        {
            score[i]=7;
        }
        else if(k<=25)
        {
            score[i]=6;
        }
        else if(k<=36)
        {
            score[i]=5;
        }
        else if(k<=49)
        {
            score[i]=4;
        }
        else if(k<=64)
        {
            score[i]=3;
        }
        else if(k<=81)
        {
            score[i]=2;
        }
        else if(k<=100)
        {
            score[i]=1;
        }
        else
        {
            score[i]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",score[i]);
    }
}
