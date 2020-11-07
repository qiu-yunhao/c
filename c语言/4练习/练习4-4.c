#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数:");
    scanf("%d",&x);
    if(x<0){
        printf("错误,nt\a");}
    else if(x==0){
        printf("sb");
    }
    else{
        while (x>=1){
        printf("%d ",x--);
    }}
    printf("\n");
    return 0;

}