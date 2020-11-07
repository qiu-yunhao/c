#include <stdio.h>
int main(void)
{
    int n,t,j=0,i=0;
    int v[100];
    printf("请输入一个整数：");
    scanf("%d",&n);
    while(n>0)
    {
        v[i]=n%10;
        n=n/10;
        printf("%d\n",v[i]);
        i=i+1;
    }
    int b,sum=0;
    int a[100];
    for(t=0;t<i;t++)
    {
        sum=v[t]+sum;
    }
    printf("%d\n",sum);
    while(sum>0)
    {
        a[j]=sum%10;
        printf("%d\n",a[j]);
        j=j+1;
        sum=sum/10;
    }
    for(b=0;b<j/2;b++)
    {
        int c=a[b];
        a[b]=a[j-b-1];
        a[j-b-1]=c;
    }
    for(b=0;b<j;b++)
    {
        printf("%d\n",a[b]);
    }
    for(b=0;b<j;b++)
    {
        switch(a[b])
        {
            case 0:printf("ning ");break;
            case 1:printf("yi ");break;
            case 2:printf("er ");break;
            case 3:printf("san ");break;
            case 4:printf("si ");break;
            case 5:printf("wu ");break;
            case 6:printf("liu ");break;
            case 7:printf("qi ");break;
            case 8:printf("ba ");break;
            case 9:printf("jiu ");break;
        }
    }
    puts("");
    return 0;
}