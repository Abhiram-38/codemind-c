#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j+i==n+1||j-i==0)
            {
                printf("%d ",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}