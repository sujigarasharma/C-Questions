//sum of n Numbers
#include<stdio.h>
int sum();
void main()
{
	int res=sum();
	printf("Results = %d",res);
}
int fac()
{
	int b,i,n,res;
	printf("Enter The Number : ");
	scanf("%d", &n);
	b=1;
	for(i=n;i>=1;i--)
	{
		res=i*b;
		b=res;
		
		}	
	return res;
}
