#include <stdio.h>
int min1 (int a,int b)
{
    if(a>b)
    return b;
    else
    return a;
}
int main(void)
{
int a,b;
printf("整数1：");scanf("%d",&a);
printf("整数2：");scanf("%d",&b);
printf("最小值是%d\n",min1(a,b));
return 0;
}