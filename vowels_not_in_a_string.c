#include<stdio.h>
int main()
{
    char str[100];
    int i,ax=0,ix=0,ex=0,ox=0,ux=0,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a')
        {
            ax++;
        }
        if(str[i]=='e')
        {
            ex++;
        }
        if(str[i]=='i')
        {
            ix++;
        }
        if(str[i]=='o')
        {
            ox++;
        }
        if(str[i]=='u')
        {
            ux++;
        }
    }
    if(ax==0)
        {
            printf("a ");
            c++;
        }
        if(ex==0)
        {
            printf("e ");
            c++;
        }
        if(ix==0)
        {
            printf("i ");
            c++;
        }
        if(ox==0)
        {
            printf("o ");
            c++;
        }
        if(ux==0)
        {
            printf("u ");
            c++;
        }
        if(c==0)
        {
            printf("0");
        }
    
}