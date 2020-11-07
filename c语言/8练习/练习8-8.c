#include <stdio.h>
int gcd(int x,int y)
{
    int z;
    if(x<y)
    {
        if(y%x==0)
        return x;
        else
        return gcd(y,x);
    }
    else if(x==y)
    return x;
    else
    {
        if(x%y==0)
        return y;
        else
        return gcd(y,x%y);
    }
}
int main(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("最大公约数为：%d\n",gcd(x,y));
    return 0;
}