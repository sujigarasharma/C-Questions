#include<stdio.h>
int gcd(int,int);
void main()
{
	int n1,n2;
	printf("Enter The Number");
	scanf("%d%d",&n1,&n2);
	int res=gcd(n1,n2);
	printf("GCD =%d\n",res);
}
int gcd(n1,n2)
{
	int i,j,rem;
	rem=n1%n2;
	i=rem;
	j=n2;
	while(rem!=0)
		{
			rem=j%i;
			j=i;
			i=rem;
		}
	return j;
}

