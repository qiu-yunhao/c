#include <stdio.h>
int yue(int a,int b)
{
    int c=1;
    if(a<b)
    {
        c=b;
        b=a;
        a=c;
    }
    while(c!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
int main(void)
{
    int n,i,j,t=0,sum=0;
    int v[100];
    printf("请输入一个数：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            if(i>j)
            {
                v[t]=yue(i,j);
                printf("%d %d  ",i,j);
                printf("%d\n",v[t]);
                t=t+1;
            }
        }
    for(i=0;i<t;i++)
    {
        sum=sum+v[i];
    }
    printf("%d\n",sum);
    return 0;
}