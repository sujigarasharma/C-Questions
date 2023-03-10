/*Write a Program to convert decimal to octal, decimal to hexadecimal and Print ASCII Value
of a character using format specifier.*/
#include<stdio.h>
#include<math.h>     

int main()
{
	int n,temp,rem,sum=0,i=0,p,hd;
	printf("Enter The Decimal Number : ");
	scanf("%d",&n);
	temp=n;
	while (temp!=0)
	{
		rem=temp%8;
		p=pow(10,i);
		sum=sum+(rem*p);
		temp=temp/8;
		i++;
	
	}

	printf("The Octal Value is : %d\n",sum);
	printf("The Hexadecimal value in small letters: %x\n",n);
    printf("The Hexadecimal value in capital letters: %X\n",n);
	
}
