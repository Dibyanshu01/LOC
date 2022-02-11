#include<stdio.h>
#include<math.h>
int main()

{
	float r,d,a,c,pi=3.14;
	printf("enter radius of circle\n");
	scanf("%f",&r);
	d=2*r;
	printf("diameter of circle:%f\n",d);
	a=pi*r*r;
	printf("area of circle:%f\n",a);
	c=2*pi*r;
	printf("circumference of circle:%f\n",c);
	return 0;
	
}