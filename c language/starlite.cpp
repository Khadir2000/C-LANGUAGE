#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	 for( i=1;i<=6;i++)
	 {
	 	k=1;
	 	for( j=1;j<=6;j++)
	 	{
	 		if(i==1||j==1||i==6||j==6)
	 		{
	 			printf("*");
			}
			else
			{
				printf("%d",k++);
			}
		 }
		 printf("\n");
	 }
}
