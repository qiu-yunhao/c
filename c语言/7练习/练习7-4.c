#include <stdio.h>
unsigned set(unsigned *x,int pos)
{
    unsigned y=1U<<(32-pos);
    *x=*x|y;
}
unsigned reset(unsigned *x,int pos)
{
    unsigned y=1U<<(32-pos);
    y=~y;
    *x=*x&y;
}
unsigned inverse(unsigned *x,int pos)
{
    unsigned y=1U<<(32-pos);
    *x=*x^y;
}
int main(void)
{
    int pos,p;
    unsigned x;
    scanf("%u",&x);
    scanf("%d",&pos);
    printf("请选择更改方式【set...0//reset...1/inverse...2】");
    scanf("%d",&p);
    switch(p)
    {
        case 0:set(&x,pos);      break;
        case 1:reset(&x,pos);    break;
        case 2:inverse(&x,pos);  break;
    }
    printf("%u",x);
    puts("");
    return 0;
}