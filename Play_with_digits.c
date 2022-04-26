#include<stdio.h>
int fun(int n)
{
    int d,sum=0;
    while(n)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n,a[100],i,x=0,res,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=a[i];
        res=fun(x);
        sum+=res;
    }
    printf("%d",sum);
}