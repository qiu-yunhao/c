#include <stdio.h>
/*---将v2的倒排列数组赋值给v1---*/
void intary_rcpy(int v1[],const int v2[],int n)
{
    int i;
    printf("{");
    for(i=0;i<n;i++)
    {
    v1[i]=v2[n-1-i];
    printf("%d",v1[i]);
    }
    printf("}/n");
}
int main(void)
{
    int m,n;
    int v1[n],v2[n];
    printf("数组元素个数：");
    scanf("%d",&n);
    for(m=0;m<n;m++)
    scanf("%d",v2[m]);
    printf("倒排列为");
    intary_rcpy(v1,v2,n);
    return 0; 
}
