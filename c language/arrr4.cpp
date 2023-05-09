#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[5],max;
printf("enter the value of array");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<5;i++)
{
	printf("%d\t",a[i]);
if(a[i]>max)
{
	max=a[i];
	}	
}
printf("\n%d\t",max);
}
