#include<stdio.h>
void main()
{
 int n,i,n1=0,n2=1,n3;
 printf("Please enter the no. of values needed in the series :");
 scanf("%d",&n);
 printf("The series is :");
 for(i=0;i<n;i++)
 {
	if(i==0)
	 printf(" %d",n1);
	else if(i==1)
	 printf(" %d",n2);
	else
	{
	 n3=n1+n2;
	 printf(" %d",n3);
	 n1=n2;
	 n2=n3;
	}
 }
}
