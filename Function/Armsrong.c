#include<stdio.h>
int arm();
void main()
{
	int res=arm();
	if(res==1)
		printf("The Number is Armstrong ");
	else
		printf("The Number is Not a Armstrong ");
}
int arm()
{
	int a,b,i=0,r,n,temp,sum;
	printf("Enter The Number : ");
	scanf("%d",&a);
	printf("\n");
	n=a;
	while()
		{
			r=n%10;
			temp=r*r*r;
			sum=temp+i;
			i=sum;
			n=n/10;	
		}
	if(i==a)
		return 1;
	else
		return 0;
		
}

