#include <stdio.h>
int main(void)
{
    int n,m,p,i,j;
    printf("请输入一个整数：");
    scanf("%d",&m);
    printf("请输入另一个整数：");
    scanf("%d",&n);
    if(m>n)
    {
    p=m;
    m=n;
    n=p;
    }
    int b=0,c=0;
    int v[500];
    for(i=1;i<=1000;i++)
    {
        int a=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                a=a+1;
            }
        }
        if(a==2)
        {
            v[b]=i;
            b=b+1;
        }
    }
    for(i=0;i<b;i++)
    {
        if(v[m-1]<=v[i]&&v[i]<=v[n-1])
        {
            if(c%10==0&&c>9)
                putchar('\n');
            printf("%4d ",v[i]);
            c=c+1;
        }
    }
    puts("");
    return 0;
}