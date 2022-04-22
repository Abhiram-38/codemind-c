#include<stdio.h>
int fun(int n)
{
    int x,d=0,sum=0,temp;
    x=n*n;
    temp=n;
    while(x)
    {
        d=x%10;
        sum+=d;
        x=x/10;
    }
    if(temp==sum)
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
    int n;
    scanf("%d",&n);
    if(fun(n))
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}