#include<stdio.h>
int main()
{
    char str[100];
    int i,x=0;
    scanf("%[^
]s", str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==97 || str[i]==101 || str[i]==105 || str[i]==111 || str[i]==117 || str[i]==65 || str[i]==69 || str[i]==73 || str[i]==79 || str[i]==85)
        {
            x++;
        }
    }
    if(x==0)
    {
        printf("0");
    }
    else
    {
        printf("%d",x);
    }
}