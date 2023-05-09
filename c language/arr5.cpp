#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[5],temp;
	printf("enter the arrays value\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf("\ndisplay enter the elements\t");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	//sorting logic is there
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
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
		printf("%d",a[i]);
	}
}
