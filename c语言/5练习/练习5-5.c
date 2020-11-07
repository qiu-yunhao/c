#include <stdio.h>
#define number 7
int main(void)
{
    int i;
    int x[number];
    for(i=0;i<number;i++){
    printf("x[%d]:",i);
    scanf("%d",&x[i]);
}
for(i=0;i<3;i++){
    int y=x[i];
    x[i]=x[6-i];
    x[6-i]=y;
}
puts("倒叙排列");
for(i=0;i<number;i++)
printf("x[%d]=%d\n",i,x[i]);
return 0;
}