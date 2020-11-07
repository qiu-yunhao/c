#include<stdio.h>

int main()
{
    int i,j;
    int s[6][4];
    int num;
    int sum=0;
    printf("统计学生人数：");
    scanf("%d",&num);
    printf("语文  数学  总分  平均分");
    for(i=0;i<num;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&s[i][j]);
        printf("%d\n",s[i][j]);
        sum=sum+s[i][j];
        }
        for(j=2;j<4;j++)
        {
        printf("%3d  ",sum);
        printf("%.2f",(double)sum/2);
        }
    }
    return 0;
}