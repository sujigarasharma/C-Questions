// Write a C program to print the following series 0 1 1 2 3 5 8…
int fib();
void main()
{
	int res=fib();
	printf("Fibanacci seires is : %d",res);
}
int fib()
{
	int a,b,i,n,temp;
	printf("Enter The Number of series : ");
	scanf("%d", &n);
	a=0;
	b=1;
	for(i=2;i<n;i++)
	{
		temp=a+b;
		a=b;
		b=temp;
		}	
	return b;
}
