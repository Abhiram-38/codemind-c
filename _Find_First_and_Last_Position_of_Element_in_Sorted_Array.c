#include<stdio.h>
int main()
{
    int n,a[100],i,j,k,c=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d ",i);
            c+=1;
            x=i;
        }
    }
    if(c==0)
    {
        printf("-1 -1");
    }
    if(c==1)
    {
        printf("%d ",x);
    }
}
