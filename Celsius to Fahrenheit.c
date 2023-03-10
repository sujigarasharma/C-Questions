//Write an algorithm and Program to Convert Fahrenheit to Celsius and Celsius to Fahrenheit C=(5(F-32))/9
#include<stdio.h>
int main()
{
	int con;
	float c,f,Celsius,Fahrenheit;
	printf("Press 1 to Convert Fahrenheit to Celsius \n");
	printf("Press 2 to Convert Celsius to Fahrenheit \n\n");
	printf("Chose the Convertion : ");
	scanf("%d", &con);
	
	switch (con)
	{
		case 1 :
			printf("Enter The Fahrenheit : ");
			scanf("%f", &f);
			Celsius=(f-32)*5.0/9.0;
			printf("Celsius Value is %.2f",Celsius);
				break;
		case 2 :
			printf("Enter The Celsius : ");
			scanf("%f", &c);
			Fahrenheit=(c*9.0)/5.0+32;
			printf("Fahrenheit Value is %.2f",Fahrenheit);
				break;
					
	}

	
}


