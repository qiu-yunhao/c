#include <stdio.h>
int main(void)
{
    int x,retry;
    do{
    printf("请输入一个正整数");
    scanf("%d",&x);
        if(x<0){
            retry=0;
            printf("输入的值是负数！错误！！！\a\n");}
        else {
            while(x>=0){
                retry=1;
                printf("%d ",x);
                x-- ;}
            }
    }while(retry==0);
    printf("\n");
    return 0;
}