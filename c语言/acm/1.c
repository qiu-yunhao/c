#include <stdio.h>
int main(void)
{
    int x,y,z,a;
    int sum=0;
    int b=0;
    printf("请输入a的值：");
    scanf("%d",&a);
    printf("输入数的个数是：");
    scanf("%d",&x);
    do{
        b=b+1;
        printf("NO.%d:",b);
        scanf("%d",&z);
        if(z<a)
        {sum=sum+z;}
        else
        {sum=sum;}
    }while(b<x);
    printf("小于%d的数的和是%d\n",a,sum);
    return 0;

}