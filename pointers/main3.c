/*Write a program that takes an array of integers and calculates the
sum using a pointer instead of array indexing.*/

#include<stdio.h>

#define LEN 12

void assign(int *arr) {
	int i,*ptr = arr;
	for(i=0;i<LEN;i++) {
		scanf("%d",(ptr));
		ptr = ptr+1;
	}
}

int sumof(int *arr) {
	int i,sum=0,*ptr = arr;
	for(i=0;i<LEN;i++) {
		sum += *ptr;
		ptr = ptr+1;
	}
	return sum;
}

int main() {
	int arr[LEN];
	assign(arr);
	printf("Sum of the array = %d.",sumof(arr));
	return 0;
}
