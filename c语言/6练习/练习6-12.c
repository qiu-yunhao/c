#include <stdio.h>
void mat(const int a[4][3],const int b[3][4],int c[4][4])
{
    int i,j,n;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(n=0;n<3;n++)
            {
                c[i][j]+=a[i][n]*b[n][j];
            }
        }
    }
}
int main(void)
{
    int x,y;
    int a[4][3]={0};
    int b[3][4]={0};
    int c[4][4]={0};
    for(x=0;x<4;x++)
    {
    for(y=0;y<3;y++)
    scanf("%d",&a[x][y]);
    }
    for(x=0;x<3;x++)
    {
    for(y=0;y<4;y++)
    scanf("%d",&b[x][y]);
    }
    mat(a,b,c);
    for(x=0;x<4;x++)
    {
    for(y=0;y<4;y++)
    printf("%4d",c[x][y]);
    putchar('\n');
    }
    return 0;
}