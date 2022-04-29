#include<stdio.h>
int main()
{
    int x=0,i;
    char str[100],c;
    scanf("%[^
]s",str);
    scanf(" %c",&c);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==c)
        {
            printf("True
");
            printf("%d",i);
            x++;
            break;
        }
    }
    if(x==0)
    {
        printf("False");
    }
}