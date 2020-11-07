#include <stdio.h>
int main(void)
{
    int x,y;
    printf("整数值：");
    scanf("%d",&x);
    for(y=2;y<=x;y+=2);printf("%d",y);putchar('\n');
    return 0;
}