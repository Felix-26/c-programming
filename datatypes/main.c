#include<stdio.h>
#include<stdbool.h>

int main() {
	char a = 'C';
	char b[] = "Felix Thomas";
	float c = 3.141592;
	double d = 3.141592653589793;
	bool e = true;
	char f = 100;
	unsigned char g = 257;
	char g1 = -101;
	short h = 32769;
	unsigned short i = 65537;
	int j = 2147483648;
	unsigned int k = 4294967296;
	long long int l = 9223372036854775807;
	unsigned long long int m = 18446744079272975902U;

	printf("%0.15f\n",c);
	printf("%0.15lf\n",d);
	printf("%d\n",e);
	printf("%c\n",f);
	printf("%d\n",g);
	printf("%c\n",g1);
	printf("%d\n",h);
	printf("%d\n",i);
	printf("%d\n",j);
	printf("%u\n",k);
	printf("%lld\n",l);
    printf("%llu\n",m);
	return 0;
}
