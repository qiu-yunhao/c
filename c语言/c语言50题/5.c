#include <stdio.h>
int main(void)
{
    int i,j,x=0,y=0,a,b;
    int v[100][4];
    for(i=1;i<100;i++)
    {
        int n=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
            n=n+1;
            }
        }
        if(n==2)
        {
            v[x][y]=i;
            y=y+1;
            if(y>3)
            {
                x=x+1;
                y=0;
            }
        }
    }
    for(a=0;a<x;a++)
    {
        for(b=0;b<5;b++)
        printf("%4d",v[a][b]);
    puts("");
    }
    return 0;
}