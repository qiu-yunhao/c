#include <stdio.h>
#define N 80
int main(void)
{
    int i,j;
    int num;
    int t[N];
    int bunpu[11]={0};//bunpu[i]以0初始化
    printf("请输入学生人数:");
    do{
        scanf("%d",&num);
        if(num<1||num>N)
        printf("\a请输入1～%d的数:",N);
    }while(num<1||num>N);
    printf("请输入%d的人的分数\n",num);
    for(i=0;i<num;i++){
        printf("%2d号:",i+1);
        do{
            scanf("%d",&t[i]);
            if(t[i]<0||t[i]>100)
            printf("\a请输入1~100的数");
        }while(t[i]<0||t[i]>100);
        bunpu[t[i]/10]++;//t[i]代表学生成绩；t[i]/10目的是得到分数的十分位。
        }
        puts("\n---分布图-----");
        for(i=0;i<=9;i++){
        printf("%3d-%3d:",i*10,i*10+9);
        for(j=0;j<bunpu[i];j++)//j用来表示出现在分数段的人数。
        putchar('*');
        putchar('\n');}
        printf("     100:");
        for(j=0;j<bunpu[10];j++)//i与j不能用同一字母表示（原因：当i=j是i额变化会影响bunpu[i]的取值）
        putchar('*');
        putchar('\n');
    
    return 0;
}