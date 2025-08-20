#include<stdio.h>
#include<limits.h>
#include<float.h>

void printsize2() {
	signed char sc=1;
	signed char sc_max = (sc << 7) - 1;
	signed char sc_min = -(sc << 7);
	unsigned char uc = ~0;
	printf("signed char : %d to %d\n",sc_min,sc_max);
	printf("Unsigned char: 0 to %u\n", uc);
}

void printsize() {
	printf("signed char : %d to %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("signed short : %d to %d\n",SHRT_MIN,SHRT_MAX);
	printf("signed int : %d to %d\n",INT_MIN,INT_MAX);
	printf("signed long : %ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("float : %e to %e\n",FLT_MIN,FLT_MAX);
	printf("double : %e to %e\n",DBL_MIN,DBL_MAX);
	printf("long double : %Le to %Le\n",LDBL_MIN,LDBL_MAX);
	
	printf("Unsigned char: 0 to %u\n", UCHAR_MAX);
	printf("Unsigned short: 0 to %u\n", USHRT_MAX);printf("Unsigned int: 0 to %u\n", UINT_MAX);
	printf("Unsigned long: 0 to %lu\n", ULONG_MAX);

}

void main() {
	printsize2();
}
