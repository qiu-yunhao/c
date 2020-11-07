#include <stdio.h>
int c;
#define swap(type,a,b) (c=a,a=b,b=c)
int main(void)
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    swap(int ,a,b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}