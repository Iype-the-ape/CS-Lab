//This program is used to implement Binary Search in an Array of MAX size 20
//To make it more better we are going to add limits 
#include<stdio.h>
#include<limits.h>

main()
{
	int a[NAME_MAX+1],i,n,p,low=0,high=0,mid=0; // by doing this the size of array is maxed out 
	printf("\nEnter the no. of elements in the array:");
	scanf("%d",&n);
	printf("\nEnter the sorted array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	high=n-1;
	mid=n-1/2;
	printf("\nEnter the no. to be searched:");
	scanf("%d",&p);
	//Binary Searching 
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
