#include <stdio.h>
int main(void)
{
    int x,y;
    printf("正整数:");
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    putchar('*');
    putchar('\n');
    return 0;
}