/*Implement binary search on a sorted array using pointers instead of 
indices.*/

#include<stdio.h>
#include<stdlib.h>

int *getArray(int *n) {
	int i;
	printf("enter the size of the array : ");

	//recieving array size
	scanf("%d",n);

	//allocating memory for array of size n
	int *arr = (int *)calloc(*n,sizeof(int));
	if(!arr) {
		printf("memory allocation failed!\n");
		exit(0);
	}
	//recieving the elements
	for(i=0;i<*n;i++){
		printf("arr[0] = ");
		scanf("%d",&(arr[i]));
	}
	return arr;
}

void printArray(int *arr,int n) {
	//print the array
	for(int i=0;i<n;i++) {
		printf("%d	",arr[i]);
	}
	printf("\n");
}

void swap(int **a,int **b) {
	//swapping variables
	int temp = **a;
	**a = **b;
	**b = temp;
}

void sortArray(int *arr,int n) {
	//declaring pointer to store address of the array indices that 
	//need to be swapped
	int i,j,*l,*r,swapped;
	//sorting
	for(i=0;i<n-1;i++) {
		swapped = 0;	//flag to check if any swapping happened
		for(j=0;j<n-i-1;j++) {
			l=arr+j;
			r=arr+j+1;
			if(*(l)>*(r)) {
				swap(&(l),&(r));
				swapped = 1;
			}
		}
		//if no elements were swapped array is already sorted
		if(swapped == 0) {
			break;
		}
	}
}

int binarySearch(int *arr,int x,int n) {
	int l=0;
	int r=n-1;
	int mid;
	int loop = 1;
	while(l<=r) {
		mid = l+(r-l)/2;
		printf("loop %d\n",loop);
		printf("-------\n");
		printf("l = %d\n",l);
		printf("r = %d\n",r);
		printf("mid = %d\n\n",mid);
		if(*(arr+mid) == x) {
			return mid;
		} else if(*(arr+mid)>x) {
			r=mid-1;
		} else {
			l=mid+1;
		}
		mid = (l+r)/2;
	}
}

int main() {
	int *arr,n,x;
	arr = getArray(&n);
	printf("before sorting \n");
	printArray(arr,n);
	sortArray(arr,n);
	printf("after sorting \n");
	printArray(arr,n);
	printf("enter the number to be searched : ");
	scanf("%d",&x);
	printf("search element is found at index : %d\n",binarySearch(arr,x,n));
}
