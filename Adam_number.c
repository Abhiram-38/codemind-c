#include<stdio.h>
int main()
{
    int n,x,d=0,y=0,z,a=0;
    scanf("%d",&n);
    x=n*n;
    while(n)
    {
        d=n%10;
        y=y*10+d;
        n=n/10;
    }
    z=y*y;
    while(z)
    {
        d=z%10;
        a=a*10+d;
        z=z/10;
    }
    if(a==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}