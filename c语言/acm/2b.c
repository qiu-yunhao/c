#include <stdio.h>
int main(void)
{
    int v[10];
    int a,i;
    int b=0;
    for(i=0;i<10;i++)
    scanf("%d",&v[i]);
    printf("小涛能够到的高度为：");
    scanf("%d",&a);
    for(i=0;i<10;i++)
    if(v[i]<a)
    b=b+1;
    printf("小涛能摘到%d个苹果",b);
    return 0;
}