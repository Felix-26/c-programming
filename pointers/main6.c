/*Write a program to reverse a string in-place using pointers.*/

#include<stdio.h>
#include<string.h>

void swap(char *a,char *b) {
	//printf("%d",**a);
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reversestr(char *str,int n) {
	char *l=str;
	//printf("%p\n",l);
	char temp,*r=str+n-1;
	while(l<r) {
		swap(l,r);
		l++;
		r--;
	}
	l=str;
}

void display(char *str,int n) {
	char *i=str;
	printf("\n");
	while(i<str+n) {
		printf("%c",*i);
		i++;
	}
	printf("\n");
}

void main() {
	char str[10];
	int i;
	printf("enter the string : ");
	scanf("%s",str);
	reversestr(str,strlen(str));
	display(str,strlen(str));
}

