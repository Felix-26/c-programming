#include<stdio.h>

int main() {
	float c,f;
	float l,u,s;
	l=0;
	u=300;
	s=20;

	f=l;
	while(f<=u) {
		c=5*(f-32)/9;
		printf("%f\t\t%f\n",f,c);
		f+=s;
	}
}
