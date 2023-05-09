#include<stdio.h>
#include<conio.h>
int main()
{
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if(i>=j||i<=j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
