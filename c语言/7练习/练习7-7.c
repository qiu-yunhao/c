#include <stdio.h>
int main(void)
{
    float x;
    double y;
    long double z;
    printf("请输入x的值：");scanf("%f",&x);
    printf("请输入y的值：");scanf("%lf",&y);
    printf("请输入z的值：");scanf("%Lf",&z);
    printf("x=%f\n",x);
    printf("y=%f\n",y);
    printf("z=%Lf\n",z);
    return 0;
}