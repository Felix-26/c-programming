/*Implement a function that rotates an array to the left by k positions 
using pointers.*/

#include<stdio.h>
#include<stdlib.h>


void rotateLeft(int *arr,int k,int n) {
	for(int i=0;i<k;i++) {
		int temp=*(arr);
		for(int j=0;j<n-1;j++) {
			*(arr+j)=*(arr+j+1);
		}
		*(arr+n-1)=temp;
	}
}

void getArray(int *arr,int n) {
	for(int i=0;i<n;i++) {
		scanf("%d",arr+i);
	}
}

int main() {
	int *arr,i,n,k;
	printf("\nenter the size of the array :");
	scanf("%d",&n);
	arr = (int *)calloc(n,sizeof(int));
	printf("\nenter the array : ");
	getArray(arr,n);
	printf("\nhow many elements to be rotated to left : ");
	scanf("%d",&k);
	rotateLeft(arr,k,n);
	printf("\nrotated array : \n");
	for(i=0;i<n;i++) {
		printf("%d	",arr[i]);
	}
}
