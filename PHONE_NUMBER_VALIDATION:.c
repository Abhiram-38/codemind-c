#include<stdio.h>
int main()
{
    int n,j=0,i;
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        j++;
        if(j==10 && n==0)
        {
            j--;
        }
    }
    if(j==9)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}