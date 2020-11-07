#include <math.h>
#include <stdio.h>
int main(void)
{
    double s;
    printf("请输入正方形面积：");
    scanf("%lf",&s);
    double a;
    a=sqrt(s);
    printf("正方形边长为：%f\n",a);
    return 0;
}