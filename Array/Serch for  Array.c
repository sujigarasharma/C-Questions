#include<stdio.h>
void main()
{
	int n;
	printf("Enter The element :");
	scanf("%d",&n);
	int arr[n],i,serch;
	for(i=0;i<n;i++)
	{
		printf("Enter The element [%d] = \n",i);
		scanf("%d",&arr[i]);	
	}
	printf("Enter The serch element :");
	scanf("%d",&serch);
	for(i=0;i<n;i++)
	{
		if(serch==arr[i])
			{
					printf("\n%d",i);
						break;
			}
		}	

	
}
