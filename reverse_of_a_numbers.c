#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        printf("%d",d);
        n=n/10;
    }
}