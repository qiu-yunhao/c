#include <stdio.h>
int main(void)
{
    int sum=0;
    int cnt=0;
    int retry;
    do{
        int t;
        printf("请输入一个整数");
        scanf("%d",&t);
        sum+=t;
        cnt++ ;
        printf("是否要继续？【yes...0\no...9]");
        scanf("%d",retry);
    }while(retry==0);
    printf("何为%d，平均朱是%.2f",sum,(double)sum/cnt);
    return 0;
}