#include<stdio.h>
int main()
{
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-1;j++)
        {
            printf("%d",j);
        }
        for(j=1;j<n-2;j++)
        {
            printf("%d",j);
        }
        printf("
");
    }
    
}