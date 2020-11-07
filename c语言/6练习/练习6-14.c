#include <stdio.h>
#define N 10
int main(void)
{
    int i;
    static double v[N];
    for(i=0;i<N;i++)
    printf("%.1f  ",&v[i]);
    putchar('\n');
    return 0;
}