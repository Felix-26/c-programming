/*
Write a program to declare an integer variable, assign it a value, and then
print its value using both the variable and a pointer.
*/

#include<stdio.h>

int main() {
	int x,*ptr;
	x=2025;
	ptr = &x;
	printf("variable value = %d\n",x);
	printf("value pointed by the pointer = %d\n",*ptr);		//dereferencing
	return 0;
}
