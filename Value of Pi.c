//Write a Program to Find the Value of Pi upto ‘n’ terms
#include <stdio.h>
int main()
{
	float sum=0,res;
	int i,n;
	printf("Enter The Number  : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
		{
			if(i%2==0)
				res=-4.0/(2*i-1);
			else if(i%2!=0)
				res=4.0/(2*i-1);
				
			sum=res+sum;
		}
	printf("The Sum of Seiries is %f",sum);
		
}
