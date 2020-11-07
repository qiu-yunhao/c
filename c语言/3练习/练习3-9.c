#include <stdio.h>
int main(void)
{
    int x,y,z,min;
    puts("请输入三个整数");
    printf("整数x:");scanf("%d",&x);
    printf("整数y:");scanf("%d",&y);
    printf("整数z:");scanf("%d",&z);
    min=(x<y)?x:y;
    min=(min<z)?min:z;
    printf("他们的最小数是%d",min);
    return 0;
}