#include <stdio.h>
int main(void)
{
    int retry;
    do{
        int x;
        printf("请输入一个整数");
        scanf("%d",&x);
        if(x==0)
            puts("这个数为0");
        else if(x>0)
            puts("这个数是正数");
        else 
            puts("这个数是负数");
        printf("是否继续【yes...0/no...9】");
        scanf("%d",&retry);
    }while(retry==0);
    return 0;
}