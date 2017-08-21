#include<stdio.h>
main()
{
	int a[20],i,n,p;
	printf("\nEnter the total no. of elements in array:");
	scanf("%d",&n);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter the number to be searched:");
	scanf("%d",&p);
	for(i=0;i<n;i++)
		if(p==a[i])
		{
			printf("\nNumber present!");
		}
}
