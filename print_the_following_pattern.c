#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",(char)(65+i));
        }
        printf("
");
    }
    
}