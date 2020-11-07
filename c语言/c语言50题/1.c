#include <stdio.h>
int main(void)
{
    int a,b,c;
    int max;
    printf("三角形的一边a为：");scanf("%d",&a);
    printf("三角形的一边b为：");scanf("%d",&b);
    printf("三角形的一边c为：");scanf("%d",&c);
    if(a+b>c&&a!=b!=c)
    printf("3\n");
    else if(a==b&&a!=c||b==c&&b!=a||a==c&&a!=b)
        printf("2\n");
    else if(a=b=c)
        printf("1\n");
    else
        printf("0\n");
}