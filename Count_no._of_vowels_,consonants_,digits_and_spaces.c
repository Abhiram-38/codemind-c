#include<stdio.h>
int main()
{
    char s[100];
    int i,v=0,ws=0,d=0,c=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='o' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='A' || s[i]=='O' || s[i]=='I' || s[i]=='E' || s[i]=='U')
        {
            v++;
        }
        else if(s[i]==' ')
        {
            ws++;
        }
        else if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
        {
            if(s[i]=='a' || s[i]=='o' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='A' || s[i]=='O' || s[i]=='I' || s[i]=='E' || s[i]=='U')
            {
                continue;
            }
            c++;
        }
        else if(s[i]>='0' || s[i]<='9')
        {
            d++;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",ws);
    
}