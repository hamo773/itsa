#include <stdio.h>

int main()
{
    int n,p;
    float r;
    scanf("%f %d %d",&r,&n,&p);
    int i=0;
    int k;
    k=0;
    for(i=0;i<n;i++)
    {
        k=(k+p)*(1.0+r);
    }
    printf("%d\n",k);
}
