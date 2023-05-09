#include<stdio.h>
#include<conio.h>
int main()
{
 int i,a[5];
 printf("enter the value of element of array\t");
 for(i=0;i<5;i++)
 {
 	 scanf("\n%d\t",&a[i]);
 }
 printf("\nprintng the element of array\t");
 for(i=0;i<5;i++)
 {
 	printf("%d\t",a[i]);
 }
 printf("\nodd number of array\t");
 for(i=0;i<5;i++)
{
	if(a[i]%2==1)
	{
			printf("%d\t",a[i]);
	}
}

}
