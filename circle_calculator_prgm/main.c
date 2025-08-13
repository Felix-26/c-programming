#include<stdio.h>
#include<math.h>

int main() {
	double radius,area,volume,surfacearea,circumferance;
	const double pi = 22.0/7.0;
	printf("enter the radius of the circle or the sphere: ");
	scanf("%lf",&radius);

	printf("The radius is %lf cm\n",radius);

	area = pi * pow(radius,2);
	volume = pi * pow(radius,3) * 4.0/3.0;
	surfacearea = pi * pow(radius,2) * 4;
	circumferance = 2 * pi *radius;

	printf("\nCircumferance of the circle = %lfcm\n",circumferance);
	printf("Area of the circle = %lf^2\n",area);
	printf("Volume of the sphere = %lfcm^3\n",volume);
	printf("Suraface area of the sphere = %lfcm^2\n",surfacearea);
	return 0;
}
