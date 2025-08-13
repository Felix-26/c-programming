#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	double x = 4.62394;
	int a = 9;
	double b = sqrt((double)a);
	int c = pow(a,3);
	double d = round(x);
	double e = ceil(x);
	double f = floor(x);
	double g = abs(x);
	double h = log(x);
	int i = 45;

	printf("%lf\n",b);
	printf("%d\n",c);
	printf("%lf\n",d);
	printf("%lf\n",e);
	printf("%lf\n",f);
	printf("%lf\n",g);
	printf("%lf\n",h);
	printf("%lf\n",sin(i));
	return 0;
}
