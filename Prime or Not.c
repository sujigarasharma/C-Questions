//Write a C program to check the given number is prime or not
#include<stdio.h>
int main()
{
	int n,i,count;
	printf("Enter The Number : ");
	scanf("%d", &n);
	i=n;
	count=0;
	while(i>=1 && i<=n)
	{
		n%i==0;
		count++;
		i--;
	}
	if(n==1)
	{
		printf("The Number is Neither Prime nor Composite");
	}
	else if(count==2)
	{
		printf("The Number is Prime Number");
	}
	else
		printf("The Number is Not a Prime Number");
	getch ();
}
