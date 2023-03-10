// Factorial
#include<stdio.h>
int fac();
void main()
{
	fac();
}
int fac()
{
	int i,n,fact=1;
	printf("Enter The Number : ");
	scanf("%d", &n);

	for(i=n;i>=1;i--)
	{
		fact=i*fact;
		}	
	printf("Results = %d",fact);
}
