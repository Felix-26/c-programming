#include<stdio.h>

int main() {
	int u=300,l=0,s=20;
	float c,f;
	c=l;

	printf("\tC\tF\n\n");

	while(c<=300) {
		f = (9.0/5.0)*c + 32;
		printf("\t%.2f\t%.2f\n",c,f);
		c += s;
	}
}
