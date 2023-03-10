#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("%d\n",i);
		if(i==3)
			break;
	}
	printf("Bye");
}
