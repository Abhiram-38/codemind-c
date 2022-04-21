#include<stdio.h>
int fun(int v)
{
    int p,m=1,s=0;
    while(v)
    {
        p=v%10;
        s=s+p;
        m=m*p;
        v=v/10;
    }
    if(s==m)
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
    int v;
    scanf("%d",&v);
    if(fun(v))
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}