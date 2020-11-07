#include <stdio.h>
int main(void)
{
    int n,retry;
    printf("请输入一个正整数：");
    do{
        scanf("%d",&n);
        if(n<=0)
        {
            puts("错误，请输入正整数！\a");
            retry=1;
        }
        else
        {
            retry=0;
        }
    }while(retry==1);
    while(n>0)
    {
        printf("%d",n%10);
        n/=10;
    }
    return 0;
}
