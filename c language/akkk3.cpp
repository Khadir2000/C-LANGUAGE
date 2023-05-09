#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,temp,n,k=3;
	
	printf("enter the arrays value\n");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	
	}
/*	printf("\ndisplay enter the elements\t");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}*/
	//sorting logic is there
	for(i=0;i<5;i++)
	{
		for(j=(i+1);j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		printf("\n  array of sorting\t");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
