#include<stdio.h>
void main()
{
	int arr[5],i,sum=0;
	for(i=0;i<5;i++)
	{
		
		printf("Enter The array of sum\n",i);
		scanf("%d",&arr[i]);
	
	}
	
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("The Sum of Arrays = %d",sum);
}
