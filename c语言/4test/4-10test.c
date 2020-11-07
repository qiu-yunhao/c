#include <stdio.h>
int main(void)
{
    int x;
    do {
        printf("请输入一个整数:");
        scanf("%d",&x);
        if(x<=0){
            puts("\a请不要输入非正整数");
        }
    }while(x<=0);
    printf("该数逆向显示的结果是：");
    while(x>0){
        printf("%d",x%10);
        x/=10;
    }
    puts(".");

}