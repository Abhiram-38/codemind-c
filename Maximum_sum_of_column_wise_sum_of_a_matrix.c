#include<stdio.h>
int main()
{
    int i,j,a[100][100],n,sum=0,c,r,d[100],k=0,max;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        sum=0;
        for(j=0;j<r;j++)
        {
            sum+=a[j][i];
        }
        d[k]=sum;
        k++;
    }
    max=d[0];
    for(i=0;i<=k;i++)
    {
        if(max<d[i])
        {
            max=d[i];
        }
    }
    printf("%d",max);
}