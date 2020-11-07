#include <stdio.h>
int main(void)
{
    int x,i,j;
    printf("正方形的边长是：");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=x;j++)
        {putchar('*');}puts("");}
    return 0;
}
