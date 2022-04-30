#include<stdio.h>
int main()
{
    int i,x=0,y=0;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            x++;
        }
        if(str[i]=='o')
        {
            y++;
        }
    }
    if(y==2*x)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}