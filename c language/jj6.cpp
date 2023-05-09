#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,j,temp,n;
	printf("enter the size of array\t");
	scanf("%d",&n);
	printf("enter the arrays value\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf("\ndisplay enter the elements\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	//sorting logic is there
	for(i=0;i<n;i++)
	{
		for(j=(i+1);j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		printf("\n  array of sorting\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
