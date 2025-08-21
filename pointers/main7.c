/*Write a program that demonstrates a pointer to a pointer by printing
 the value of an integer using int **.*/

#include<stdio.h>

int main() {
	int x=2025;
	int *ptr = &x;
	int **dptr = &ptr;
	printf("**dptr = *ptr = x = %d",**dptr);
}
