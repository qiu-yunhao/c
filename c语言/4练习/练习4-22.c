#include <stdio.h>
int main(void)
{
    int x,y,a,b,i,j;
    printf("让我们来画一个长方形\n");
    printf("一边长为：");scanf("%d",&x);
    printf("另一边长为：");scanf("%d",&y);
    a=(x>y)?x:y;
    b=(x>y)?y:x;
    for ( i = 1; i<=b; i++){
        putchar('*');
        for(j=1;j<a;j++){
            putchar('*');
        }
        puts("");
    }
    return 0;
}