#include<stdio.h>

int main() {
	int u=300,l=0,s=20;
	float f,c;

	f=l;
	printf("\n  FARENHEIT     CELSIUS\n");
	while(f<=u) {
		c = (5.0/9.0)*(f-32);
		printf("%10.0f%10.2f\n",f,c);
		f += s;
	}
}
