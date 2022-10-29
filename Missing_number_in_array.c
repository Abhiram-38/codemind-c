#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,x=0,i,a1[100],c=0;
        scanf("%d",&a);
        for(i=0;i<a-1;i++)
        {
            scanf("%d",&a1[i]);
        }
        x=1;
        while(1)
        {
            c=0;
            for(i=0;i<a-1;i++)
            {
                if(x==a1[i])
                {
                    c=1;
                }
            } 
            if(c==0)
            {
                printf("%d
",x);
                break;
            }
            else
            {
                x+=1;
            }
        }
    }
}