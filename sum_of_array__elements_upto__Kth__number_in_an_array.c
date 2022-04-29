#include<stdio.h>
int main()
{
    int n,a[100],i,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]==x)
        {
            break;
        }
    }
    printf("%d",sum);
}