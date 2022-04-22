#include<stdio.h>
int main()
{
    int n,d,res=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    if(temp==res)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}