#include <stdio.h>
int main(void)
{
    float x=0.0;
    float y;
    float sum1=0,sum2=0;
    int i;
    for(i=0;i<=100;i++)
    {
        y=i/100.0;
        sum1=sum1+x;
        sum2=sum2+y;
        printf("sum=%f",sum1);
        printf("    ");
        printf("sum=%f",sum2);
        puts("");
        x+=0.01;
    }
    return 0;
}