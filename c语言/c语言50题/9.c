#include <stdio.h>
int main(void)
{
    int x,y,z,i,j,d;
    int v1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int v2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    printf("今年是");
    scanf("%d",&x);
    printf("月份为");
    scanf("%d",&y);
    printf("日期是");
    scanf("%d",&z);
    if(x%4==0&&x%100!=0||x%400==0)
    {
    
        for(i=0;i<y-1;i++)
        {
            d+=v2[i];
        }
        d=d+z;
    }
    else
    {
        for(i=0;i<y-1;i++)
        {
            d+=v1[i];
        }
        d=d+z;
    }
    printf("这天是这年的第%d天\n",d);
    return 0;
}