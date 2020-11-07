#include <stdio.h>
int main(void)
{
    float x=0.0;
    float y;
    int i;
    for(i=0;i<=100;i++)
    {
        y=i/100.0;
        printf("x=%f",x);
        putchar('     ');
        printf("x=%f",y);
        puts("");
        x+=0.01;
    }
    return 0;
}