#include <stdio.h>
int search(const int v[],int idx[],int key,int n)
{
    int i;
    int x=0;
    int y=0;
    for(i=0;i<n;i++)
    {
        if(v[i]==key)
            x++;
        else
        {
            idx[y]=v[i];
            y++;
        }
    }
    printf("与被查找的数相同的数有%d个\n",x);
    printf("接受数组\n");
    printf("{");
    for(i=0;i<y;i++)
    printf("%d  ",idx[i]);
    printf("}\n");
}
int main(void)
{
    int i,n,key;
    int v[n];
    int idx[n];
    printf("请输入元素个数:");
    scanf("%d",&n);
    printf("要查询的数是：");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    scanf("%d",&v[n]);
    search(v,idx,key,n);
    return 0;
}