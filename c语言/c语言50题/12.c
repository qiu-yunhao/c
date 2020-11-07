#include <stdio.h>
int main (void)
{
    int n,retry;
    int i=0;
    printf("请输入一个整数");
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
    do{
        i=i+1;
        if(n%2==0)
            n=n/2;
        else 
            n=(3*n+1)/2;
    }while(n!=1);
    printf("重复次数%d\n",i);
    return 0;
}