#include <stdio.h>
int main(void)
{
    int i=0;
    int sum=0;
    int num,tmp;
    printf("要输入多少个数");scanf("%d",&num);

    while(i<num){
        printf("NO.%d:",++i);
        scanf("%d",&tmp);
        sum+=tmp;
    }
    printf("合计值:%d\n",sum);
    printf("平均值:%.2f\n",(double)sum/num);
    return 0;
}