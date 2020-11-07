#include <stdio.h>
int main(void)
{
    int x,y,z,max;
    puts("请输入三个整数");
    printf("整数x：");scanf("%d",&x);
    printf("整数y：");scanf("%d",&y);
    printf("整数z：");scanf("%d",&z);
    max=x;
    if(y>max) max=y;
    if(z>max) max=z;
    printf("较大的数是%d\n",max);
    return 0;
}