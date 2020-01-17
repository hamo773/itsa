#include <stdio.h>

int main()
{
    int a;
    double b;
    while(scanf("%lld",&a)!=EOF)
        {
            b=a*1.6;
            printf("%.1lf\n",b);
        }
}
