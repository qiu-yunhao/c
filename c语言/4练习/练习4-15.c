#include <stdio.h>
int main(void)
{
    int x,y,z;
    double b;
    printf("开始数值：",x);
    scanf("%d",&x);
    printf("结束数值：",y);
    scanf("%d",&y);
    printf("间隔数值：",z);
    scanf("%d",&z);
    x=x-z;
    do{
        x=x+z;
        b=(x-100)*0.9;
        printf("身高：%dcm    ",x);
        printf("体重：%.2fkg\n",b);
    }while(x<y);
    return 0;
}