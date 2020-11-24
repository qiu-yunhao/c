#include <stdio.h>
int main(void)
{
    int i,j,y=0,n;
    for(i=1;i<100;i++)
    {
        n=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
            n=n+1;
            }
        }
        if(n==2)
        {
            y=y+1;
            printf("%4d",i);
            if(y%5==0)
            putchar('\n');
        }
    }
    return 0;
}