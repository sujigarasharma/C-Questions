//Write a C program to find whether the given number is Armstrong or not.
#include<stdio.h>
int main()
{
	int a,b,i=0,r,n,temp,sum;
	printf("Enter The Number : ");
	scanf("%d",&a);
	printf("\n");
	n=a;
	while(n>0)
		{
			r=n%10;
			temp=r*r*r;
			sum=temp+i;
			i=sum;
			n=n/10;	
		}
	if(i==a)
	{
			printf("The Number is Armstrong Number");
	}
	else
		printf("The Number is Not a Armstrong Number");

	getch() ;
}
