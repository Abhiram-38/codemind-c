#include<stdio.h>
int main()
{
    int n,a[100][100],r,c,i,j,sum;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum+=a[i][j];
        }
        printf("%d ",sum);
    }
}