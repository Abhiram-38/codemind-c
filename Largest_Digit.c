#include<stdio.h>
int main()
{
    int n,res=0,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(d>res)
        {
            res=d;
        }
        n=n/10;
    }
    printf("%d",res);
}