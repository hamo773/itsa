#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num_data[n];
    int large[n];
    int data[10][100]={0};
    int i,j;
    for(i=0;i<n;i++)
    {
        large[i]=-1;
        scanf("%d",&num_data[i]);
        for(j=0;j<num_data[i];j++)
        {
            scanf("%d",&data[i][j]);
        }
    }
    int k;
    int tepcout=0;
    for(i=0;i<n;i++)
    {
        k=0;
        tepcout=0;
        for(j=0;j<num_data[i];j++)
        {
            if(k==data[i][j])
            {
                tepcout++;
                if(j==num_data[i]-1)
                {
                    if(tepcout>large[i])
                    {
                        large[i]=tepcout;
                    }
                }
            }
            if(k!=data[i][j])
            {
                if(tepcout>large[i])
                {
                    large[i]=tepcout;
                    tepcout=1;
                }
                else
                {
                    tepcout=1;
                }
                k=data[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",large[i]);
    }
}
