#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,j,temp,len,k=4;
	len=sizeof(a)/2;
	
	printf("enter the arrays value\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	
	}
/*	printf("\ndisplay enter the elements\t");
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}*/
	//sorting logic is there
	for(i=0;i<6;i++)
	{
		for(j=(i+1);j<6;j++)
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
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n third smallest element in the given array is %d\t",a[k-1]);
}
