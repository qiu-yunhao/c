#include <stdio.h>
int main(void)
{
    int x,y,z;
    puts("请输入三个整数");
    printf("整数x：");scanf("%d",&x);
    printf("整数y：");scanf("%d",&y);
    printf("整数z：");scanf("%d",&z);
    if(x==y||x==z||y==z)
    printf("他们有两个数相等");
    else if(x==y==z)
    printf("他们三个数相等");
    else 
    printf("他们三个不相等");
    return 0;
}