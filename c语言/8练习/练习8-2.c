#include <stdio.h>
#define max(x,y) ( ( (x)>(y) ) ? (x) : (y) )
int main(void)
{
    int a,b,c,d,x,y;
    printf("请输入四个数：");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=max(max(a,b),max(c,d));
    y=max(max(max(a,b),c),d);
    printf("%d\n",x);
    printf("%d\n",y);
    return 0;
}