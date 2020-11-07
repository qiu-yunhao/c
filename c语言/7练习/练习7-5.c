#include <stdio.h>
unsigned set_n(unsigned *x,int pos,int n)
{
    int t;
    unsigned y;
    for(t=32-pos;t>=33-pos-n;t--)
    {
    y=1U<<t;
    *x=*x|y;
    }
}
unsigned reset_n(unsigned *x,int pos,int n)
{
    int t;
    unsigned y;
    for(t=32-pos;t>=33-pos-n;t--)
    {
    y=1U<<t;
    y=~y;
    *x=*x&y;
    }
}
unsigned inverse_n(unsigned *x,int pos,int n)
{
    int t;
    unsigned y;
    for(t=32-pos;t>=33-pos-n;t--)
    {
    y=1U<<t;
    *x=*x^y;
    }
}
int main(void)
{
    int pos,p,n;
    unsigned x;
    scanf("%u",&x);
    scanf("%d",&pos);
    scanf("%d",&n);
    printf("请选择更改方式【set...0//reset...1/inverse...2】");
    scanf("%d",&p);
    switch(p)
    {
        case 0:set_n(&x,pos,n);      break;
        case 1:reset_n(&x,pos,n);    break;
        case 2:inverse_n(&x,pos,n);  break;
    }
    printf("%u",x);
    puts("");
    return 0;
}