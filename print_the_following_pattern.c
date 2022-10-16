#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("%d",k-1);
        }
        for(l=1;l<i;l++)
        {
            printf("%d",l);
        }
        printf("
");
    }
    
}