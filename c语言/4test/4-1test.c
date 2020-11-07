#include <stdio.h>
int main(void)
{
    int retry;
    do {
        int x;
        printf("请输入一个整数");
        scanf("%d",&x);
        if(x%2)
            puts("这个数是奇数");
        else 
            puts("这个数是偶数");
        printf("是否重复一次?[yes...0/no...9]:");
        scanf("%d",&retry);
    }while(retry==0);
    return 0;
}