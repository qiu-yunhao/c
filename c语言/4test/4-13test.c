#include <stdio.h>
int main(void)
{
    int i=0;
    int sum=0;
    int num,tmp;
    printf("要输入多少个数:");scanf("%d",&num);
    for(i=0;i<num;i++)
    {printf("NO.%d:",i+1);scanf("%d",&tmp);
    sum=sum+i;
    sum+=tmp;}
    printf("和是%d\n",sum);
    printf("平均值是%.2f\n",(double)sum/num);
    return 0;

}