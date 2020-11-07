#include <stdio.h>
int main(void)
{
    int x,y,z;
    int a[2][4][3]={{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82,},{73,43,46},{85,46,35},{85,46,35}}};
    for(x=0;x<2;x++)
    {
        for(y=0;y<4;y++)
        {
            for(z=0;z<3;z++)
            {printf("%4d",a[x][y][z]);}
            putchar('\n');
        }
    }
    return 0;
}