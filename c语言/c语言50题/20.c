#include <stdio.h>
int p (int n)
{
    int i,t=-1;
    for(i=0;i<n;i++)
    t=(-1)*t;
}
int main(void)
{
    int i,n;
    double v[n];
    double sum=0;
    for(i=1;i<n;i++)
    {
        v[i]=p(i+1)*(1/i);
        sum+=v[i];
    }
    printf("%.2f",sum);
    return 0;
}