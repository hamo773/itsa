#include <stdio.h>

int main()
{
    int i=0;
    int age;
    float wei,tal;
    int k=0;
    float a,b,c;
    while(k!=-1)
    {
        scanf("%f%f%d",&tal,&wei,&age);
        a=(wei/tal)*41.2;
        b=tal*wei/634.4;
        c=wei*0.4;
        if(age>30)
        {
            b=b+((age-30)/5)*0.15;
        }
        if(age>28)
        {
            c=c+((age-28)/2*0.25);
        }
        printf("%.2f %.2f %.2f\n",a,b,c);
        scanf("%d",&k);
    }
}
