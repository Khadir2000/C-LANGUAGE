#include<stdio.h>
#include<conio.h>
int  main()
{
	int a[10],i,n,p,v;
	// here p ==== position of array
	//here v==== value of that position 
	printf("enter the value of size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 scanf("\n%d\t",&a[i]);
	}
	
/*	for(i=0;i<n;i++);
	{
		 printf("\n%d\t",a[i]);
	}*/
	printf("\n taking position and value\t");
     scanf("\n%d %d\t",&p,&v);
     
     for(i=n-1;i>=p-1;i--)
     {
     	a[i+1]==a[i];
	 }
	      	a[p-1]=v;

	 printf("\nresultan value print\t");
	 for(i=0;i<=n;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
}
