#include <stdio.h>
void brost(int v[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=n-1;j>=0;j--)
        {
            if(v[j]<v[j+1])
            {
            int t;
            t=v[j];
            v[j]=v[j+1];
            v[j+1]=t;
            }
        }
}
int main(void)
{
    int n,m,i;
    printf("请输入镇上的人数：");
    scanf("%d",&n);
    printf("请输入要寻找的大富翁的人数：");
    scanf("%d",&m);
    int v[n];

    for(i=0;i<n;i++)
    {
        printf("%d号的资产：",i+1);
        scanf("%d",&v[i]);
    }
    brost(v,n);
    if(n>=m)
        for(i=0;i<m;i++)
        printf("%d ",v[i]);
    else
        for(i=0;i<n;i++)
        printf("%d ",v[i]);
    putchar('\n');
    return 0;
}