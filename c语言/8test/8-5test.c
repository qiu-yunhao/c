#include <stdio.h>
#define NUMBER 5
void bsort (int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j>0;j--)
        {
            if(a[j-1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
} 
int main(void)
{
    int i;
    int height[NUMBER];
    printf("请输入%d人的身高",NUMBER);
    for(i=0;i<NUMBER;i++)
    {
        printf("请输入%d号的身高：",i+1);
        scanf("%d",&height[i]);
    }
    bsort(height,NUMBER);
    puts("按升序排列");
    for(i=0;i<NUMBER;i++)
        printf("第%d高的身高为%d\n",i+1,height[i]);
    return 0;
}