#include<stdio.h>
int main()
{
	int r;
	float area;
	printf("enter radius of the circle: ");
	scanf("%d",&r);
	area=(3.14*r*r);
	printf("Area of circle is: %f\n",area);
	return 0;
}