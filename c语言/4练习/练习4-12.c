#include <stdio.h>
int main(void)
{
    int m=0;
    int n,retry;
    printf("请输入一个正整数：");
    do{
        scanf("%d",&n);
        if(n<=0)
        {
            puts("错误，请输入正整数\a");
            retry=1;
        }
        else
        {
            retry=0;
        }
    }while(retry==1);
    while(n>0)
    {
        n=n/10;
        m=m+1;
    }
    printf("这个数是%d位数\n",m);
    return 0;
}