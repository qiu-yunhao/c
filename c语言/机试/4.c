#include <stdio.h>
int main(void)
{
    int n;
    printf("请输入学生成绩：");
    scanf("%d",&n);
    n=n/10;
    switch(n)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:printf("C\n");break;
        case 6:
        case 7:
        case 8:printf("B\n");break;
        case 9:
        case 10:printf("A\n");break; 
    }
    return 0;
}