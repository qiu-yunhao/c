#include <stdio.h>
int main(void)
{
    int x,sum;
    printf("请输入整数：");
    scanf("%d",&x);
    sum=x*(x+1)/2;
    printf("从1到%d的和是",x);
    printf("%d\n",sum);
    return 0;
}