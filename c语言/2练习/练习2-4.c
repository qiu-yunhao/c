#include <stdio.h>
int main(void)
{
    int x,y;
    puts("请输入两个整数");
    printf("整数1：");scanf("%d",&x);
    printf("整数2：");scanf("%d",&y);
    printf("x+y=%d\n",x+y);
    printf("x-y=%d\n",x-y);
    printf("x*y=%d\n",x*y);
    printf("x/y=%d\n",x/y);
    printf("x%%y=%d\n\n",x%y);
    double a,b;
    printf("请输入两个实数");
    printf("实数1：");scanf("%lf",&a);
    printf("实数2：");scanf("%lf",&b);
    printf("a+b=%f\n",a+b);
    printf("a-b=%f\n",a-b);
    printf("a*b=%f\n",a*b);
    printf("a/b=%f\n",a/b);
    printf("a%%b=%f\n\n",a%b);

    return 0;
}