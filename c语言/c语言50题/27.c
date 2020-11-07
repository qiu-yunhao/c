#include <stdio.h>
int main(void)
{
    int Q,N,i,m,j,y,t,fu;
    int v[10]={0};
    int sum[30]={0};
    printf("请输入总报销额度：");
    scanf("%d",&Q);
    printf("请输入发票个数：");
    scanf("%d",&N);
    for(i=N;i>0;i--)
    {
        int a=0,b=0,c=0,x=0;
        t=0;
        printf("请输入物品个数：");
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&y);
            switch(y)
            {
                case 0:printf("A:");a=a+1;break;
                case 1:printf("B:");b=b+1;break;
                case 2:printf("C:");c=c+1;break;
                default :printf("X:");x=x+1;break;
            }
            printf("价格为：");
            scanf("%d",&v[j]);
            sum[t]=sum[t]+v[j];
        }
        for(j=0;j<m;j++)
        {
            if(v[j]>600||x>0)
            sum[t]=0;
        }
        t=t+1;
    }
    for(i=0;i<t;i++)
    {
        fu+=sum[i];
    }
    if(fu>Q)
    {
        while(fu>Q)
        {
            int min;
            for(i=0;i<t;i++)
            {
                min=sum[0];
                if(sum[i]<min)
                    min=sum[i];
            }
            fu=fu-min;
        }
    }
    printf("可报销最大额度为%d\n",fu);
    return 0;
}