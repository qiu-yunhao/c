#include <stdio.h>
int main(void)
{
    int x,y,z,a,b;
    puts("让我们来画一个金字塔");
    printf("金字塔有几层:");
    scanf("%d",&x);
    for(y=0;y<=x;++y)
    {z=2*(x-y)-1;
    for(a=y-1;a>=0;a--){
    putchar(' ');}
    for(b=z;b>0;b--){
        putchar('*');}
        puts("");
    }
    return 0;
}
    