#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[100],n;
	printf("\nenter required size of array\t");
	scanf("%d",&n);
	printf("enter the element of array\t");
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	
	printf("\nshowing the elements of array\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("positive nmumber\t");
	for(i=1;i<n;i++)
	{
		if(a[i]>0)
		{
			printf("%d\t",a[i]);
		}
	}
}
