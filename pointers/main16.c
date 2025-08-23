/*Implement Bubble Sort or Selection Sort using pointers (no array 
indexing).*/

#include<stdio.h>
#include<stdlib.h>

void swap(int **a,int **b) {
	int temp = **a;
	**a = **b;
	**b = temp;
}

void bubbleSort(int *arr,int n) {
	int i,j,*l,*r;
//	printf("%p\t%d\n",&arr+3,*(arr+3));
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			l=arr+j;
			r=arr+j+1;
			if(*(l)>*(r)) {
				swap(&(l),&(r));
			}
		}
	}

}

int main() {
	int i,j,arr[10] = {3,7,1,4,2,9,5,7,6,8};
	bubbleSort(arr,10);
	for(i=0;i<10;i++) {
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
