#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,j,temp,n;
	printf("\nenter the value of n element\t");
	scanf("%d",&n);
	printf("\narray element\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	//sorting logic
	for(i=0;i<n;i++)
	{
		for(j=(i+1);j<n;j++)
		{
			if(a[i]>a[j])
			{
				 temp =a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("\nsorted array\t");
	for(i=0;i<n;i++)
	{
		 printf("%d",a[i]);
	}
}
