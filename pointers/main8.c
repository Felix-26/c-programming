/*Write a program that dynamically allocates memory for n integers,
takes input from the user, and prints them using pointers.*/

#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,n;
	printf("enter the number of vars : ");
	scanf("%d",&n);
	int *vars = (int *)malloc(n*sizeof(int));

	for(i=0;i<n;i++) {
		printf("enter the value of var[%d] = ",i);
		scanf("%d",&vars[i]);
	}
	for(i=0;i<n;i++) {
        printf("%d   ",vars[i]);
    }
	printf("\n");
	return 0;
}
