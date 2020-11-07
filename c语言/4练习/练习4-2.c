#include <stdio.h>
int main(void)
{
    int sum=0;
    int x,y,a,b,z;
    puts("请输入两个整数");
    printf("整数1：");scanf("%d",&x);
    printf("整数2：");scanf("%d",&y);
    a=(x>=y)?x:y;
    b=(x>y)?y:x;
    do{
        sum=sum+b;
        b=b+1;
        if(b<=a) z=0;
        else z=1;
    }while(z==0);
    printf("他们的和是%d.\n",sum);
    return 0;
}