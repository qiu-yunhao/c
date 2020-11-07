#include<stdio.h>
int main(void)
{
    int i,j,x,y,t,n;
    int sum=0;
    int a[4][3]={0};
    int b[3][4]={0};
    int c[4][4]={0};

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        printf("%2d",a[i][j]);
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        scanf("%d",&b[i][j]);
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        printf("%4d",b[i][j]);
        printf("\n");
    }

    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            for(n=0;n<3;n++)
            {
                c[x][y]+=a[x][n]*b[n][y];
            }
        }
    }
    printf("结果如下\n");
    for(x=0;x<4;x++)
    {    
        for(y=0;y<4;y++)
            printf("%4d",c[x][y]);
        putchar('\n');
    }
    return 0;
}