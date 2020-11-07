#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个数");
    scanf("%d",&x);
    if (x%5)
        puts("该整数不能被5整除");
    else
        puts("该数可以被5整除");
    return 0;
    
    

}
