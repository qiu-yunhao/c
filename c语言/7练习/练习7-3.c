#include <stdio.h>
int count_bits(unsigned x)
{
    int bit=0;
    while(x)
    {
        if(x&1U)
        bit++;
        x>>=1;
    }
        return bit;
}
int int_bits(void)
{
    return count_bits(~0U);
}
void print_bit(unsigned x)
{
    int i;
    for(i=int_bits()-1;i>=0;i--)
    putchar(((x>>i)&1U)?'1':'0');
}
unsigned rrotate(unsigned x,int n)
{
    print_bit(x>>n);
}
unsigned lrotate(unsigned x,int n)
{
    print_bit(x<<n);
}
