#include <stdio.h>
int main(void)
{
    int n,i;
    int v[100]={0,1,1};
    printf("你要咨询第几个数：");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        v[i+3]=v[i]+v[i+1]+v[i+2];
    }
    printf("%d\n",v[n]);
    return 0;
}