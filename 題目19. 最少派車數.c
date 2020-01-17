#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[25]={0};
    int str,end;
    for(i=0;i<n;i++)
        {
            scanf("%d%d",&str,&end);
            while(str<end)
                {
                    a[str]=a[str]+1;
                    str++;
                }
        }
    int k=0;
    for(i=0;i<25;i++)
        {
            if(a[i]>k)
                {
                    k=a[i];
                }
        }
    printf("%d\n",k);
}
