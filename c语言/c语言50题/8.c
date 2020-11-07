#include <stdio.h>
int max(int v[],int n)
{
    int max,i;
    max=v[0];
    for(i=0;i<n-1;i++)
        if(v[i]<v[i+1])
            max=v[i+1];
    return max;
}
int min(int v[],int n)
{
    int min,i;
    min=v[0];
    for(i=0;i<n-1;i++)
        if(v[i]>v[i+1])
            min=v[i+1];
    return min;
}
int main(void)
{
    int n,i,a,b;
    int j=0;
    int v[n],m[n];
    printf("请输入评委人数：");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d号评委：",i+1);
        scanf("%d",&v[i]);
    }
    a=max(v,n);b=min(v,n);
    for(i=0;i<n;i++)
    {
        if(b<v[i]<a)
        {
            m[j]=v[i];
            j=j+1;
        }
    }
    int sum;
    for(i=0;i<j;i++)
    {
        sum+=m[i];
    }
    printf("平均分为:%.2f",(double)sum/(n-2));
    return 0;
}
