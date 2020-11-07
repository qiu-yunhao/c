#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("一门课的成绩：");scanf("%d",&a);
    printf("另一门课的成绩：");scanf("%d",&b);
    if(60<a<100&&60<b<100)
        c=1;
    else 
        c=2;
    switch(c)
    {
    case 1:puts("it is pass.")  ;break;
    case 2:puts("it is not pass");break;
    default:puts("it is error.");break;
    }
}
