/*Given an array of string pointers, write a function that swaps two
strings by swapping their pointers (not the actual characters).*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LEN 5

void getString(char *strptrs[],int n){
	char temp[30];
	for(int i=0;i<n;i++) {
		printf("enter the string at %d : ",i);
		scanf(" %[^\n]",temp);
		*(strptrs+i) = (char *)malloc(strlen(temp));
		if(!strptrs[i]) {
			printf("memory allocation failed!\n");
			exit(0);
		}
		strcpy(strptrs[i],temp);
	}
	printf("before swapping : \n\n");
	for(int i=0;i<n;i++) {
		printf("[%p] -> %s\n",(strptrs+i),*(strptrs+i));
	}
}

void swapPtrs(char **a,char **b) {
	char *temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	char *strptrs[LEN];
	getString(strptrs,LEN);
	swapPtrs(&strptrs[0],&strptrs[LEN-1]);
	printf("after swapping : \n\n");
	for(int i=0;i<LEN;i++) {
		printf("%p  %s\n",&strptrs[i],strptrs[i]);
	}
}

