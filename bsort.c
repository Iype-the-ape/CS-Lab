#include<stdio.h>
void main()
{
	int a[32],n,t,i,j;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	   for(j=0;j<n-i;j++)
		if(a[j]>a[j+1])
		{
		 t=a[j];
		 a[j]=a[j+1];
		 a[j+1]=t;
		}
	printf("Sorted array :");
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
}
