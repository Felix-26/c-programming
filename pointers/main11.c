#include<stdio.h>
#define LEN 10

void swap(int **a,int **b) {
	int temp = **a;
	**a = **b;
	**b  = temp;
}

void arr_reversal(int *arr,int n) {
	int temp,*l=arr,*r=arr+n-1;
	while(l<r) {
		temp=*l;
		*l=*r;
		*r=temp;
		l++;
		r--;
	}
}

void display(int *arr,int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("%d	",*(arr+i));
	}
}

int main(){
	int i,arr[LEN] = {0,1,2,3,4,5,6,7,8,9};
	printf("before reversal\n");
	display(arr,LEN);
	arr_reversal(arr,LEN);
	printf("\n\nafter reversal\n");
	display(arr,LEN);
	return 0;
}
