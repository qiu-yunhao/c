#include <stdio.h>
int main(void)
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    c=a/b;
    printf("%4.2f\n",c);//4是c的显示位数,2是保留两位小数
    return 0;
}