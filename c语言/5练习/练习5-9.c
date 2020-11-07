#include <stdio.h>
#define N 80
int main(void)
{
    int i,num,x,y,b;
    int c[11]={0};
    int m[N];
    printf("请输入学生人数：");
    do{
        scanf("%d",&num);
        if(num<1||num>N)
        printf("请输入1～%d的数\a\n",N);
    }while(num<1||num>N);
    printf("输入%d的人的分数\n",num);
    for(i=0;i<num;i++)
    {
    printf("%2d号:",i+1);
    do{
    scanf("%d",&m[i]);
    if(m[i]<0||m[i]>100)
    {
    printf("请输入1~100的数");
    }
    }while(m[i]<0||m[i]>100);
    }
    printf("--------------分割线-------------\n");
    int n[num][11];
    for(i=0;i<num;i++)
    {
    b=m[i]/10;
    n[num-1-c[b]][b]=1;
    c[b]=c[b]+1;
    }
    for(x=0;x<num;x++)
    {
        for(y=0;y<11;y++)
        switch(n[x][y])
        {
            case 0:printf("   ");break;
            case 1:printf("  *");break;
        printf("%3d",n[x][y]);
        }
    putchar('\n');
    }
    printf("---------------------------------\n");
    printf("  0 10 20 30 40 50 60 70 80 90 100\n");
    return 0;
}