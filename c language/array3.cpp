#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,sum=0,size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
		printf("%d\n",sum);
	
	return 0;
}
