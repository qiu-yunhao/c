#include <stdio.h>
void bsort(int v[],int n)
{
    int x,y;
    for(x=0;x<n-1;x++)
        for(y=n-1;y>=0;y--)
        {
            if(v[y-1]>v[y])
            {
                int fuck=v[y];
                v[y]=v[y-1];
                v[y-1]=fuck;
            }
        }
}
int main(void)
{
    int i,n;
    int a=0;
    int v[n],t[n];
    printf("请输入需要的整数个数：");scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d号:",i+1);
        scanf("%d",&v[i]);
        if(v[i]<0)
        {
            a++;
            t[a]=v[i];
            v[i]=-v[i];
        }
    }
    bsort(v,n);
    int j;
    for(j=0;j<a;j++)
        for(i=0;i<n;i++)
        {
            if(-t[a]==v[i])
            {
                v[i]=t[a];
            }
        }
    puts("按照绝对值由小到大排列");
    for(i=0;i<n;i++)
    {
        printf("%d号:",i+1);
        printf("%d",v[i]);
        puts("");
    }
    return 0;
}