#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入月份:");
    scanf("%d",&x);
    switch (x){
        case 3:
        case 4:
        case 5:printf("该月是春季\n");break;
        case 6:
        case 7:
        case 8:printf("该月是夏季\n");break;
        case 9:
        case 10:
        case 11:printf("该月是秋季\n");break;
        case 12:
        case 1:
        case 2:printf("该月是冬季\n");break;
        default:puts("该月份不存在");break;
    }
    return 0;
}