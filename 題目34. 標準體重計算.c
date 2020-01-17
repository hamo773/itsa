#include <stdio.h>

int main()
{
    int gen;
    float n;
    float k;
    while(scanf("%f%d",&n,&gen)!=EOF)
    {
    if(gen==1)
    {
        k=(n-80)*0.7;
    }
    else
    {
        k=(n-70)*0.6;
    }
    printf("%.1f\n",k);
    }
}
