#include <stdio.h>
int main(void)
{
    int y,z,a,b,c;
    do{
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    if(x<=0){
    z=0;puts("\a出错了!sb");}
    else{ 
    y=x/5;z=1;
    for(a=1;a<=y;a++){
    printf("*****\n");}
    b=x%5;
    for(c=1;c<=b;c++){
        putchar('*');}
    }
    }while(z==0);
    printf("\n");
    return 0;

}