#include <stdio.h>
int main(void)
{
    int x,y;
    printf("整数值:");
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    if(x%y==0)
    printf("%d ",y);
    putchar('\n');
    return 0;
}