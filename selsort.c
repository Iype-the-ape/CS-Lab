#include<stdio.h>
void main()
{
 int a[32],n,i,j,t;
 printf("Enter the array size :");
 scanf("%d",&n);
 printf("Enter the elements :");
 for(i=0;i<n;i++)
  scanf(" %d",&a[i]);
 for(i=0;i<n;i++)
   for(j=0;j<n;j++)
	if(a[i]<a[j])
	  {
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	  }
 printf("The sorted array is:");
 for(i=0;i<n;i++)
   printf(" %d",a[i]);
}
