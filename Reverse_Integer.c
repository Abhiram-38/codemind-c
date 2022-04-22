#include<stdio.h>
int main()
{
    int n,d,res=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    printf("%d",res);
}