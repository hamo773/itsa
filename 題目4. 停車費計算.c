#include <stdio.h>

int main()
{
    int a[2],b[2];
    scanf("%d%d",&a[0],&a[1]);
    scanf("%d%d",&b[0],&b[1]);
    int c,d;
    c=b[0]*60+b[1]-a[0]*60-a[1];
    if(c<=120)
        {
            d=(c/30)*30;
        }
    else if(c<=240)
        {
            d=((c-120)/30)*40+120;
        }
    else
        {
            d=((c-240)/30)*60+280;
        }
    printf("%d\n",d);
}
