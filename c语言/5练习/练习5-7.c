#include <stdio.h>
#define number 4
int main(void)
{
    int i;
    int z[number];
    for(i=1;i<=number;++i)
    {
    printf("%d号:",i);
    scanf("%d",&z[i]);}
    printf("{%d}",z[i]);
    printf("\n");
    return 0;

}