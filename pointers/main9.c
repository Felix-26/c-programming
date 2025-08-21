/*Write a program to count the number of vowels in a string using pointer
traversal.*/

#include<stdio.h>
#include<string.h>

int countvowels(char *str,int len) {
	int count=0;
	char *ptr = str;
	while(ptr<str+len) {
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'){
			count++;
		}
		ptr++;
	}
	return count;
}

void main() {
	char str[100];
	int n;
	printf("enter the string : ");
	scanf("%s",str);
	n = countvowels(str,strlen(str));
	printf("the number of vowels = %d",n);
}
