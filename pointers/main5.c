/*Write a program to calculate the length of a string using pointers.*/

#include<stdio.h>

int strleng(int *str) {
	int nc=0,*i=str;
	while((char)(*i)!='\0') {
		nc++;
		i++;
	}
	return nc;
}

void main() {
	int str[100],i=0,c;
	printf("Enter the string : \n");
	while((c=getchar())!='\n') {
		str[i]=c;
		i++;
	}
	str[++i]='\0';
	printf("length of the string = %d.",strleng(str));
}
