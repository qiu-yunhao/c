#include <stdio.h>
int main(void)
{
    int x,y;
    printf("请输入一个整数:");
    scanf("%d",&x);
    for(y=1;y<=x;y++){
    printf("%d的平方是",y);
    printf("%d\n",y*y);}
    return 0;
}