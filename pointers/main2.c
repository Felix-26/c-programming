/*Write a function to swap two integers using pointers.*/

#include<stdio.h>

void swap(int *ptr1,int *ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main() {
	int x=23,y=10;
	printf("before swapping x = %d,y = %d\n",x,y);
	swap(&x,&y);
	printf("after swapping x = %d,y = %d\n",x,y);
	return 0;
}
