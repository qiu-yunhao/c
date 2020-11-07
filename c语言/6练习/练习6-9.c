#include <stdio.h>
void rev_intary(int v[],int n)
{
    int i;
    printf("{");
    for(i=0;i<n;i++)
    {
    printf("%d ",v[n-i-1]);
    }
    printf("}");
}
int main(void)
{
    int n,i;
    int v[n];
    printf("元素个数是：");scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    printf("这个数组的倒叙排列是\n");
    rev_intary(v,n);
    putchar('\n');
    return 0;
}