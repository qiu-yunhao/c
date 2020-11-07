#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入一个整数:");scanf("%d",&x);
    if(x<=0){
        printf("错误！sb\a\n");}
    else if(x==1){printf("+");printf("\n");}
    else{
        switch(x%2){
            case 0:x=x-2;do {x=x-2;printf("+-");}while(x>=0);printf("\n");break;
            case 1:x=x-3;do {x=x-2;printf("+-");}while(x>=0);printf("+");printf("\n");break;}
        }
    return 0;
}