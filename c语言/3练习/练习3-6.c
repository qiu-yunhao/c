#include <stdio.h>
int main(void)
{
    int x,y,z,min;
    puts("请输入三个整数");
    printf("整数x:");scanf("%d",&x);
    printf("整数y:");scanf("%d",&y);
    printf("整数z:");scanf("%d",&z);
    if(x>y) min=y;else min=x;
    if(min>z) min=z;
    printf("最小的数是%d\n",min);
    
    return 0;    
}