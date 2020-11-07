#include <stdio.h>
int main(void)
{
    int x,y,z,a,b;
    puts("让我们来画一个金字塔");
    printf("金字塔有几层:");
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {   z=(y-1)*2+1;
    for(b=x-y;b>=0;b--)
    {putchar(' ');}

        for(a=1;a<=z;a++)
        {putchar('*');}
        puts("");
    }

}