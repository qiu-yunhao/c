#include <stdio.h>
int main(void)
{
    int retry;
    do{
    int x;
    printf("请输入一个正整数:"),
    scanf("%d",&x);
    if(x<=0)
    {retry=1;printf("错误！\a\n");}
    else
    {retry=0;do{x=x-1;printf("*\n");}while(x>=1);}
    }while(retry==1);
    return 0;

}