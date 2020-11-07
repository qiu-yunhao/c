#include <stdio.h>
int main(void)
{
    int y,z,a;
    int b=0;
    do {
    int x;
    printf("请输入一个整数：");
    scanf("%d",&x);
    if(x<=0){z=1;puts("\a出错！");}
    else{
    z=0;y=x/10;do{y=y-1;printf("1234567890");}while(y>0);
    }
    a=x%10;
    do{b++;printf("%d",b);}while(b<a);
    }while(z==1);
    printf("\n");
    return 0;
}