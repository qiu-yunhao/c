#include <stdio.h>
int main(void)
{
    int retry;
    do{
        int x,y;
        do{
            printf("请输入一个正整数:");
            scanf("%d",&x);
            if(x<=0)
            puts("\a请不要输入非正整数");
        }while(x<=0);
        for(y=1;y<=x;y++)
        putchar('*');
        putchar('\n');
        printf("是否继续执行？【yes...0/no...9】");
        scanf("%d",&retry);
    }while(retry==0);
    return 0;
}