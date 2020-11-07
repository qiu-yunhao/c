#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("请输入两个整数:");
    scanf("%d",&a);
    scanf("%d",&b);
    c=a%b;
    printf("%d 除以 %d的余数为%d\n",a,b,c);
    puts("a%b=c");//不会puts输出变量
    return 0;
}