#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if((i*i)==n)
        {
            x=1;
        }
    }
    if(x==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}