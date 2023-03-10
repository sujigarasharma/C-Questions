// Write a C program to print the following series 0 1 1 2 3 5 8…
#include<stdio.h>
int main()
{
	int a,b,i,n,temp;
	printf("Enter The Number of series : ");
	scanf("%d", &n);
	a=0;
	b=1;
	for(i=2;i<n;i++)
	{
		temp=a+b;
		a=b;
		b=temp;
		}	
	printf("%d seires is : %d",n,b);
}
