#include <stdio.h>
void x(int a,int b)
{
    int c;
    if(a<b)
    c=a;
    a=b;
    b=c;
}
int main(void)
{
    int a,b,c;
    printf("整数1：");scanf("%d",&a);
    printf("整数2：");scanf("%d",&b);
    x(a,b);
    do{
        c=a%b;
        if(c!=0)
        {
            a=b;
            b=c;
            x(a,b);
        }
    }while(c==0);
    printf("他们的最大公约数是%d\n",b);
    return 0;
}