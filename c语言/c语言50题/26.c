#include <stdio.h>
int main()
{
    int a,b,c,d,t,s,i,j=0,x=0,y=0;
    int m[100],n[100],v[100];
    printf("请输入两个整数:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
        m[x]=i;
        x=x+1;
        }
        if(b%i==0)
        {
            n[y]=i;
            y=y+1;
        }
    }
    for(c=0;c<x;c++)
    {
        for(d=0;d<y;d++)
        {
            if(m[c]==n[d])
            {
                v[j]=m[c];
                j=j+1;
            }
            else
            {
                v[j]=m[c];
                v[j+1]=n[d];
                j=j+2;
            }
        }
    }
    for(s=0;s<j;s++)
    {
    t*=v[s];
    }
    printf("最大公约数：%d\n",t);
    return 0;
}