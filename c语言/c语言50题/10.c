#include <stdio.h>
int main(void)
{
    int n,m,i,j;
    int v[n][m],sum1[m]/*科目平均分*/,sum2[n]/*成绩平均数*/;
    printf("请输入学生人数：");scanf("%d",&n);
    printf("请输入课程数目：");scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&v[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum2[i]+=v[i][j];
        }
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            sum1[j]+=v[i][j];
        }
    }
    printf("            ");
    for(j=0;j<m;j++)
    {
        printf("  科目%d   ",j+1);
    }
    printf("成绩平均分\n");
    for(i=0;i<n;i++)
    {
        printf("%d号 |       ",i+1);
        for(j=0;j<m;j++)
        {
            printf("  %3d    ",v[i][j]);
        }
        printf("    %4.2f",(double)sum2[i]/m);
        puts("");
    }
    printf("科目平均分|");
    for(j=0;j<m;j++)
        printf(" %4.2f   ",(double)sum1[j]/n);
    printf("\n");
    return 0;
}