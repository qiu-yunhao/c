#include <stdio.h>
int main(void)
{
    int a,b,c,d,max;
    puts("请输入四个整数");
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    printf("整数c:");scanf("%d",&c);
    printf("整数d:");scanf("%d",&d);
    if (a>b) max=a;else max=b;
    if (max>c) max=max;else  max=c;
    if (max>d) max=max;else max=d;
    printf("他们中的最大数是%d\n",max);
    return 0;    
}