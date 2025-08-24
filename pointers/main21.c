/*Write a program that takes two pointers pointing to different positions
of the same array and prints the number of elements between them.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void ptrDiff(int *p1,int *p2) {
	int diff = abs(p1-p2);
	printf("no of elements between pointers = %d\n",diff-1);
}


int main() {
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int *ptr1,*ptr2;
	ptr1=&arr[3];
	ptr2=&arr[9];
	ptrDiff(ptr1,ptr2);
}
