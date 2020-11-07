#include <stdio.h>
int main(void)
{
    int n,i,j,a,b,t=0;
    printf("请输入一个整数：");
    scanf("%d",&n);
    b=n;
    do{
        while(n>0){
            j=n;
            t=10*t;
            a=n%10;
            n=n/10;
            t=a+t;
        }
        if(t==j)
        {
            i=0;
        }
        else
        {
            i=1;
            j=j+1;
        }
    }while(i==1);
    printf("比%d大的回文数是：%d\n",b,j);
    return 0;
}