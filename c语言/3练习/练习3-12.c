#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    switch(x%2){
    case 0:puts("该数为偶数");break;
    case 1:puts("该数为奇数");break;}
    return 0;
}