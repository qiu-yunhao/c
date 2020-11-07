#include <stdio.h>
unsigned inverse_n(unsigned *x,int pos,int n)
{
    int i,t;
    for(t=32-pos;t>32-pos-n;t--)
        *x=*x^(1U<<t);
}
/*----检验----*/
int main(void)
{
    unsigned x;
    int pos,n;
    scanf("%d",&x);
    scanf("%d",&pos);
    scanf("%d",&n);
    inverse_n(&x,pos,n);
    printf("%d\n",x);
    return 0;
}