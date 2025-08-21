/*Write a program to find the maximum element in an array using pointers.*/

#include<stdio.h>

#define LEN 11

int* largest(int*,int);

int main() {
	int i,arr[LEN] = {3,5,9,2,4,1,6,7,8,10,11};
	printf("Array = {");
	for(i=0;i<LEN;i++) {
		printf("%d,",arr[i]);
	}
	printf("}\nThe largest element in the array = %d.\n",*(largest(arr,LEN)));
	return 0;
}

int* largest(int *arr,int n) {
	int *ptr = arr,i,*larg = arr;
	while(ptr<arr+n) {
		if(*ptr>*larg) {
			larg = ptr;
		}
		ptr++;
	}
	return larg;
}
