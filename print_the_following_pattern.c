#include<stdio.h>
int main()
{
    int n,a[100],i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        for(l=1;l<i;l++)
        {
            printf("%d",i);
        }
        printf("
");
    }
    
}