/*Write a program that stores 5 strings in an array of pointers and 
prints them.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 5

void readStrings(char *arr[],int n) {
	int i;
	char temp[100];
	for(i=0;i<n;i++) {
		printf("enter the string : ");
		scanf(" %[^\n]",temp);
		getchar();
		arr[i] = (char *)malloc(sizeof(temp)*sizeof(char)+1);
		if(!arr[i]) {
			printf("memory allocation failed!\n");
			exit(1);
		}
		strcpy(arr[i],temp);
	}
}

void printStrings(char *arr[],int n) {
	printf("the strings you have entered :\n");
	for(int i=0;i<n;i++) {
		printf("%s\n",arr[i]);
	}
}

void freeStrings(char *arr[],int n) {
	for(int i=0;i<n;i++) {
		free(arr[i]);
	}
}

int main() {
	char *arr[SIZE];
	readStrings(arr,SIZE);
	printStrings(arr,SIZE);
	freeStrings(arr,SIZE);
	return 0;
}
