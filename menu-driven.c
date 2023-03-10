//Write a menu-driven program using Switch case to calculate the following:
#include <stdio.h>
int main()
{
	int n,r,h;
    float v,a;
	printf("Press 1 to calculate Area of circle\n");
	printf("Press 2 to calculate Volume of Cylinder\n");
	printf("Press 3 to calculate Area of sphere\n\n");
	printf("Enter Your Choice : ");
	scanf("%d", &n);
	
	switch (n)
	{
		case 1 :
    		printf("Enter Radius of Cycle : ");
    		scanf("%d",&r);
    		a = 22.0*r*r/7.0;
    		printf("Area of circle  = %.2f",a);
    			break;
	
		case 2 :
    		printf("Enter Radius of Cylinder : ");
    		scanf("%d",&r);
    		printf("Enter Height of Cylinder : ");
    		scanf("%d",&h);
    		v = 22.0*r*r*h/7.0;
    		printf("Volume of Cylinder  = %.2f",v);
    			break;
    		
    	case 3 :
    		printf("Enter Radius of Sphere : ");
    		scanf("%d",&r);
    		a = 4.0*22.0*r*r/7.0;
    		printf("Area of Sphere  = %.2f",a);
    			break;
    	
    	default :
    		printf("Invalid Input");
    }
    
}
	
