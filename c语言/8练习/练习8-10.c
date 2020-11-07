#include <stdio.h>
void fuck(int v[],int n)
{
    int i;
    for(i=v[n];i>0;i--)
    {
        putchar('*');
    }
    putchar('\n');
}
int main(void)
{
    int ch,i;
    int cnt[10]={0};
    while((ch=getchar())!=EOF)
    {
        if(ch>='0'&&ch<='9')
        cnt[ch-'0']++;
    }
    for(i=0;i<10;i++)
    {
        printf("'%d':",i);
        fuck(cnt,i);
    }
    return 0;
}