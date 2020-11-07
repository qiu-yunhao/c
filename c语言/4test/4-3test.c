#include <stdio.h>
int main(void)
{
    int sum=0;
    int cut=0;
    int retry;
    do{
        int t;
        printf("请输入一个整数");
        scanf("%d",&t);
        sum=sum+t;
        cut=cut+1;
        printf("是否继续【yes...0/no...9】");
        scanf("%d",&retry);
    }while(retry==0);
    printf("和是%d,平均值是%.2f\n",sum,(double)sum/cut);
    return 0;
}