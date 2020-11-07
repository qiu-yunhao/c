#include <stdio.h>
int main(void)
{
    int i,j,a;
    for(i=0;i<3;i++)
    {
        for(a=i;a>0;a--)
            putchar(' ');
        for(j=2*(3-i)-1;j>0;j--)
            putchar('*');
        puts("");
    }
    for(i=0;i<2;i++)
    {
        for(a=1-i;a>0;a--)
            putchar(' ');
        for(j=2*(1+i)+1;j>0;j--)
            putchar('*');
        puts("");
    }
    return 0;
}