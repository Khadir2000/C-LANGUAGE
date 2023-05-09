#include<stdio.h>
#include<conio.h>
int main()
{ char ch='A';
for(int i=1;i<=5;i++)
{
	for(int j=1;j<=5;j++)
	{
		if(i>=j)
		{
			printf("%d ",j);
			
		}
		else
		{
			printf("%c ",ch++);
		}
		
	}
	printf("\n");
}
}
