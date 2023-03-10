//Write a program to find the average of n numbers.
#include<stdio.h>
int main()
{
	int n,i;
	float sum=0,avg,e;
	printf("Enter The elements : ");
	scanf("%d",&i);
	e=i;
	while(i!=0)
	{
		printf("Enter The Number : ");
		scanf("%d",&n);
		sum=sum+n;
		i--;	
	}
	avg = sum/e;
	printf("The Averege = %.2f ",avg);
	
}
