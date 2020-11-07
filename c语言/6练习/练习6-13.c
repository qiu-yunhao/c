#include <stdio.h>
#define a 3
#define b 2
#define c 4
void mat (int x[3][2][4])//本题a=3,b=2,c=4
{
    int l,m,n;
    for(m=0;m<b;m++)
    {
        for(n=0;n<c;n++)
        {
            for(l=0;l<a;l++)
            printf("%4d",x[l][m][n]);
            putchar('\n');
        }
    }
}
int main(void)
{
    int l,m,n;
    int x[a][b][c]={0};
    for(m=0;m<b;m++)
    {
        for(n=0;n<c;n++)
        {
            for(l=0;l<a;l++)
            scanf("%d",&x[l][m][n]);
        }
    }
    mat(x);
    return 0;
}


