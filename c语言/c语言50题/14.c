#include <stdio.h>
void ex(int v[],int n)
{
    int i,k;
    int min=v[0];
    for(i=0;i<n;i++)
    {
        if(v[i]<min)
        {
            min=v[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(v[i]==min)
        {
            k=v[0];
            v[0]=v[i];
            v[i]=k;
        }
    }
}
int main(void)
{
    int n,i;
    int v[n];
    printf("请输入要排序的数的个数：");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    ex(v,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    puts("");
    return 0;
}