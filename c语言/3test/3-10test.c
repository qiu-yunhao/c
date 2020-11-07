#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    if(x>0)
        if(x%2==0)
        puts("该整数是偶数");
        else
        puts("该整数是奇数");
    else 
        puts("您输入的不是正数\a\n");
    return 0;
    
}