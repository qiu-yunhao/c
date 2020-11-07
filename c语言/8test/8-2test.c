#include <stdio.h>
#define sqr(x) ((x)*(x))
int main()
{
    int x;
    double n;
    printf("请输入一个整数：");
    scanf("%d",&x);
    printf("该数的平方是%d\n",sqr(x));
    printf("请输入一个整数：");
    scanf("%lf",&n);
    printf("该数的平方是%f\n",sqr(n));
    return 0;
}