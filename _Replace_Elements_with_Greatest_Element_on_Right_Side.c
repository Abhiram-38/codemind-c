#include<stdio.h>
int main()
{
    int n,a[100],i,j,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        max=0;
        for(j=i+1;j<n;j++)
        {
            if(max<a[j])
            {
                max=a[j];
            }
        }
        printf("%d ",max);
    }
    printf("-1");
}