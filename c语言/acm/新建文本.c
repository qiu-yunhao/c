#include <stdio.h>
int main(void)
{
    int i,number,a;
    int sum=0;
    printf("a的值是：");
    scanf("%d",&a);
    printf("输入整数的个数：");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
    int t;
    printf("NO.%d:",i);
    scanf("%d",&t);
    if(t<a)
    {sum=sum+t;}
    else
    {sum=sum+0;}
    }
    puts("");
    printf("小于%d的数的和是%d\n",a,sum);
    return 0;


}