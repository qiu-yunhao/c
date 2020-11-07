#include <stdio.h>
int main(void)
{
    int x,y;
    int z=0;
    printf("整数值:");
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    if(x%y==0)
    {z=z+1;
    printf("%d ",y);
    putchar('\n');}
    printf("约数的个数是%d\n",z);
    return 0;
}