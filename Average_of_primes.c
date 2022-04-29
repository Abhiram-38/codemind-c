#include<stdio.h>
int fun(int n)
{
    int i,fc=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,a[100],i,x=0;
    float sum=0,res=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(fun(a[i]))
        {
            sum+=a[i];
            x++;
        }
    }
    res=sum/x;
    printf("%.2f",res);
}