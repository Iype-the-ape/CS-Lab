#include<stdio.h>
main()
{
	int a[20],i,n,p,low=0,high=0,mid=0;
	printf("\nEnter the no. of elements in the array:");
	scanf("%d",&n);
	printf("\nEnter the sorted array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	high=n-1;
	mid=n-1/2;
	printf("\nEnter the no. to be searched:");
	scanf("%d",&p);
	while(low<=high)
	{
		if(p<a[mid])
		{
			high=mid-1;
			mid=high/2;
		}
		else if(p>a[mid])
		{
			low=mid+1;
			mid=low+high/2;
		}
		else if(p=a[mid])
		{
			printf("\nNumber is present!");
			break;
		}
	}
	if(low>high)
		printf("\nThe number is not present!");
}
