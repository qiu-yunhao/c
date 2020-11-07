#include <stdio.h>
#include <time.h>
#define CLK_TCK 100
clock_t c1,c2;
double c;
void f(int x)
{
    x=2*x+1;
}
int main(void)
{
    c1=clock();
    int x;
    scanf("%d",&x);
    f(x);
    c2=clock();
    c=(double)(c2-c1)/CLK_TCK;
    printf("%f\n",c);
    return 0;
}