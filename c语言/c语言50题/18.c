#include <stdio.h>
int main(void)
{
    int T,m,n,x,y,i,j,c,d,p,q,max;
    int v[10][10],sum[100]={0};
    printf("请输入测试次数:");
    scanf("%d",&T);
    int a=0,b=0;
    for(a=0;a<T;a++)
    {
        printf("请输入矩阵类型\n");
        scanf("%d %d",&m,&n);
        printf("为%d x %d的矩阵\n",m,n);
        printf("请输入要检测的矩阵类型\n");
        scanf("%d %d",&x,&y);
        printf("为%d x %d的矩阵\n",x,y);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&v[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%4d ",v[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m-x+1;i++)
        {
            for(j=0;j<n+1-y;j++)
            {
                for(c=i;c<i+x;c++)
                {
                    for(d=j;d<j+y;d++)
                    {
                        sum[b]+=v[c][d];
                    }
                }
                b=b+1;
            }
        }
        max=sum[0];
        for(i=0;i<b;i++)
        {
            if(sum[i]>max)
            max=sum[i];
        }
        printf("%d\n",max);
        return 0;
    }
}