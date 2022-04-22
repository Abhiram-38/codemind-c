#include<stdio.h>
int main()
{
    int n,n1,n2,n3,i,c=0;
    scanf("%d",&n);
    n1=0;
    n2=1;
    for(i=0;i<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if(n==n3)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}