#include <stdio.h>
int main (void)
{
    int n,j,a,b,c,t=0;
    printf("请输入一个整数：");
    scanf("%d",&n);
    c=n;
    do{
        n=n+1;
        j=n;
        t=0;
        while(j>0)
        {
            t=t*10;
            a=j%10;
            t+=a;
            j=j/10;
        }
        if(t==n)
        {
            b=0;
            printf("比%d大的回文数是%d\n",c,n);
        }
        else
        {
            b=1;
        }
    }while(b==1);
    return 0;
}