/*The greatest common divisor (GCD) of two integers is the product of the integers’ common
factors. Write a program that inputs two numbers and find their GCD by repeated division.*/

#include <stdio.h>
int main()
{
	int num1,num2,rem,i,j;
	printf("Enter The Number 1 : ");
	scanf("%d",&num1);
	printf("Enter The Number 2 : ");
	scanf("%d",&num2);
	rem=num1%num2;
	i=rem;
	j=num2;
	while(rem!=0)
		{
			rem=num2%rem;
			j=i;
			i=rem;
		}
	printf("%d is the GCD",j);
		
}
