#include<stdio.h>
int min(int,int);
int main()
{
	int a,b;
	printf("Enter The Number 1 : ");
	scanf("%d", &a);
	printf("Enter The Number 2 : ");
	scanf("%d", &b);
	int res= min(a,b);
	if(res==1)
		printf("%d is a Minimum",a);
	else
		printf("%d is a Minimum",b);
}
int min(a,b)
{
	if(a<b)
		return 1;
	else
		return 0;
}
