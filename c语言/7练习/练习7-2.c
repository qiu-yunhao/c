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
int main(void)
{
    unsigned a,t;
    int b,i,n;
    printf("请输入一个整数：");
    scanf("%u",&a);
    printf("这个数的二进制为：");print_bit(a);
    printf("\n选择向左还是向右移动（【向左】...0/【向右】...1)\n");
    scanf("%d",&b);
    printf("移动位数为:");
    scanf("%d",&n);
    t=a;
    if(b==0)
    {
        for(i=0;i<n;i++)
        a=a*2;
        print_bit(t<<n);
    }
    else
    {
        for(i=0;i<n;i++)
        a=a/2;
        print_bit(t>>n);
    }
    puts("");
    print_bit(a);
    puts("");
    return 0;
}