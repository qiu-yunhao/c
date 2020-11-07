#include <stdio.h>
int main(void)
{
    int a,retry;
    do{
        printf("请输入一个偶数:");
        scanf("%d",&a);
        if((a%2)==0)
        {
            retry=1;
        }
        else
        {
            retry=0;
            printf("错误，请输入偶数\n");
        }
    }while(retry==0);
    int min,max;
    max=a/2;
    if(a%4==0)
    min=a/4;
    else
    min=(a/4)+1;
    printf("最少有%d只动物，最多有%d只动物\n",min,max);
    return 0;
}