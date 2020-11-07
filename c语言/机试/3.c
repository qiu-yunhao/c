#include <stdio.h>
int max(int a,int b,int c)
{
    return (((a>b)?a:b)>c)?((a>b)?a:b):c;
}
/*    检验    */
int main(void)
{
    int a=1,b=2,c=3,d;
    d=max(a,b,c);
    printf("%d\n",d);
    return 0;
}