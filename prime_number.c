#include<stdio.h>
int main()
{
    int i,fc=0,num;
    scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			fc++;	
		}	
	}
	if(fc==2)
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
}