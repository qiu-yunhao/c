#include <stdio.h>
#include<limits.h>
int main(void)
{
    printf("unsigned:%u~%u",0,UINT_MAX);
    unsigned x=429496729597000;
    unsigned y=30000;
    unsigned a=x+y;
    printf("%u",a);
    return 0;
}