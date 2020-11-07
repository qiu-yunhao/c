#include <stdio.h>
int main(void)
{
    int i,n,a,b,c;
    printf("请输入测试次数：");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a+b>c)
            printf("Case %d:true\n",i);
        else 
            printf("Case %d:false\n",i);
    }
    return 0;
}