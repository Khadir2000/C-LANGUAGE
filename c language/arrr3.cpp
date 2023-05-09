#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i,svalue,flag=0;
for(i=0;i<5;i++)
{
	 scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
	printf("%d\t",a[i]);
}
printf("\nenter the svalue\n");
scanf("%d",&svalue);

for(i=0;i<5;i++)
{
	if(a[i]== svalue)
	{
		flag=1;
		break;
	}
}
flag?printf("found"):printf("Not found");
return 0;
}
