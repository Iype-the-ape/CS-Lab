#include<stdio.h>
void main()
{
 int n,a[32],t,i,j;
 printf("Enter the array size :");
 scanf("%d",&n);
 printf("Enter the elements :");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
   for(j=i;j>0;j--)
	if(a[j]<a[j-1])
	  {
		t=a[j];
		a[j]=a[j-1];
		a[j-1]=t;
	  }
 for(i=0;i<n;i++)
   printf(" %d",a[i]);
}
