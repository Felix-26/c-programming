/*Write a function that checks whether a string is a palindrome using 
pointers.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void checkPalindrome(char *string,int len) {
	char *l=string;
	char *r=string+len-1;
	while(l<r) {
		printf("%c == %c ?\n",*l,*r);
		if(*l!=*r) {
			printf("the string is not a palindrome.\n");
			exit(0);
		}
		l++;
		r--;
	}
	printf("the string is a palindrome.\n");
}


int main() {
	char str[30];
	printf("enter the string to check if it is a palindrome : ");
	scanf("%s",str);
	int n = strlen(str);
	checkPalindrome(str,n);
}
