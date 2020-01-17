#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    getchar();
    int b[a][4];
    char c[a];
    int i;
    for(i=0;i<a;i++)
        {
            scanf("%c%d%d%d%d",&c[i],&b[i][0],&b[i][1],&b[i][2],&b[i][3]);
            getchar();
        }
    int d,e;
    for(i=0;i<a;i++)
        {
            if(c[i]=='+')
                {
                    d=b[i][0]+b[i][2];
                    e=b[i][1]+b[i][3];
                }
            if(c[i]=='-')
                {
                    d=b[i][0]-b[i][2];
                    e=b[i][1]-b[i][3];
                }
            if(c[i]=='*')
                {
                    d=b[i][0]*b[i][2]-b[i][1]*b[i][3];
                    e=b[i][0]*b[i][3]+b[i][1]*b[i][2];
                }
            if(c[i]=='/')
                {
                    d=b[i][0]/b[i][2];
                    e=b[i][1]/b[i][3];
                }
            printf("%d %d\n",d,e);
        }
}
