#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>=3&&a<=5)
        {
            printf("Spring\n");
        }
    if(a>=6&&a<=8)
        {
            printf("Summer\n");
        }
    if(a>=9&&a<=11)
        {
            printf("Autumn\n");
        }
    if(a==12||a<=2)
        {
            printf("Winter\n");
        }
}
