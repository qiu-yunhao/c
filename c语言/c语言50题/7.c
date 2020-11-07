#include <stdio.h>
int main(void)
{
    int n,i,q;
    int v[n],m[n];
    printf("请输入正整数个数：");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        do{
            scanf("%d",&v[i]);
            if (v[i]<=0)
            {
                printf("请输入正整数！/a/n");
                q=1;
            }
            else q=0;
        }while(q==1);
    }
    int a=0;
    for(i=0;i<n;i++)
    {
        if(v[i]%2==1)
        {
            m[a]=v[i];
            a++;
        }
    }
        int c=1;
    for(i=0;i<a;i++)
    {
        c=c*m[i];
    }
    printf("所有奇数的乘积是：");
    printf("%d\n",c);
    return 0;
}
