#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k;
    k=n/3;
    int a,b;
    a=0;
    b=3;
    int i=0;
    for(i=0;i<k;i++)
    {
        a=a+b;
        b=b+3;

    }
    printf("%d\n",a);
}
