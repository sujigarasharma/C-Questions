#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,min;
	for(i=0;i<n;i++)
	{
		printf("Enter The element [%d] = \n",i);
		scanf("%d",&arr[i]);	
	}
	min= arr[0];
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
			min=arr[i];
		}	
	printf("\n%d",min);
	
}
