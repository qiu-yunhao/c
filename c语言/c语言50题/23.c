#include <stdio.h>
int main(void)
{
    int n,i;
    int v[10]={0};
    printf("请输入一个正整数：");
    scanf("%d",&n);
    while(n>0){
        switch(n%10)
        {
            case 0:v[0]=v[0]+1;break;
            case 1:v[1]=v[1]+1;break;
            case 2:v[2]=v[2]+1;break;
            case 3:v[3]=v[3]+1;break;
            case 4:v[4]=v[4]+1;break;
            case 5:v[5]=v[5]+1;break;
            case 6:v[6]=v[6]+1;break;
            case 7:v[7]=v[7]+1;break;
            case 8:v[8]=v[8]+1;break;
            case 9:v[9]=v[9]+1;break;
        }
        n=n/10;
    }
    for(i=0;i<10;i++)
        if(v[i]>0)
        printf("%d出现次数:%d\n",i,v[i]);
    return 0;
}