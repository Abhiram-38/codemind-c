#include<stdio.h>
int main()
{
    int n,a[100],b[100],max=0,k=0,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[k++]=(a[i]*a[i]);
    }
    for (i=0;i<k-1;i++)
    {
        for (j=0;j<k-i-1;j++)
        {
            if (b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
}