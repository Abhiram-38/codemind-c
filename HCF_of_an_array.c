#include<stdio.h>
int main()
{
    int n,a[100],i,x,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];
    while(j<n)
    {
        if(a[j]%x==0)
        {
            j++;
        }
        else
        {
            x=a[j]%x;
            i++;
        }
    }
    printf("%d",x);
    
}