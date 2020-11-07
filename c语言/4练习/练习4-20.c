#include <stdio.h>
int main(void)
{
    int i,j,x;
    printf(" |  1  2  3  4  5  6  7  8  9\n");
    printf("------------------------------\n");
    i=0;
    do{i++;
    printf("%d|",i);
    for(j=1;j<=9;j++){printf("%3d",i*j);}putchar('\n');
    }while(i<=8);
    return 0;
}