#include <stdio.h>
int main(void)
{
    char a=1,e=2,i=3,o=4,u=5;
    int m,n;
    int j=0,num1=0,num2=0,num3=0,num4=0,num5=0;
    printf("请输入检测个数：");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        printf("请输入要检测的数：");
        scanf("%c",&m);
        while(m>0)
        {
            switch(m%10)
            {
                case 1:num1=num1+1;
                case 2:num2=num2+1;
                case 3:num3=num3+1;
                case 4:num4=num4+1;
                case 5:num5=num5+1;
            }
        m=m/10;
        }
    }
    printf("各字母出现次数为:\n");
    printf("a=num1:%d\n",num1);
    printf("e=num2:%d\n",num2);
    printf("i=num3:%d\n",num3);
    printf("o=num4:%d\n",num4);
    printf("u=num5:%d\n",num5);
    return 0;
}
