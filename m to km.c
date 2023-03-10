//Write an algorithm and Program to Convert Fahrenheit to Celsius and Celsius to Fahrenheit C=(5(F-32))/9
#include<stdio.h>
int main()
{
	int con;
	float m,k,Meter,Kilometer;
	printf("Press 1 to Convert Kilometer to meter  \n");
	printf("Press 2 to Convert Meter to kilometer  \n\n");
	printf("Chose the Convertion : ");
	scanf("%d", &con);
	
	switch (con)
	{
		case 1 :
			printf("Enter The Kilometer : ");
			scanf("%f", &k);
			Meter=k*1000.00;
			printf("Meter Value of %.2fKm is %.2fm",k,Meter);
				break;
		case 2 :
			printf("Enter The Meter : ");
			scanf("%f", &m);
			Kilometer=m/1000.00;
			printf("Kilometer Value of %.2fm is %.2fKm",m,Kilometer);
				break;		
	}

	
}
