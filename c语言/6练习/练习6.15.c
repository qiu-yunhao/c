#include <stdio.h>
int z=0;
void put_count()
{
    ++z;
    printf("put_count:第%d次\n",z);
}
int main(void)
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    put_count();
    return 0;
}