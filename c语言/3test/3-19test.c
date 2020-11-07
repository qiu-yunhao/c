#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    switch(x%3)
    {
        case 0:puts("该数能被3整除");       break;
        case 1:puts("该数除以3余1");        break;
        case 2:puts("该数除以3余2");        break;
    }
    return 0;
}