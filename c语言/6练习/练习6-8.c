#include <stdio.h>
int min_of (const int v[],int n)
{
    int i;
    int min=v[0];
    for(i=0;i<n;i++)
    {
        if(v[i]<min)
        min=v[i];
    }
    return min;
}
int main(void)
{
    int n,i;
    int a;
    int v[n];
    printf("请输入元素个数：");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("NO.%d:",i+1);
        scanf("%d",&v[i]);
    a=min_of (v,n);}
    printf("他们中最小的是%d\n",a);
    return 0;
    
}