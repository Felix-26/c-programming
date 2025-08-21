#include<stdio.h>
#include<string.h>

void swap(char *l,char *r) {
	char temp = *l;
	*l = *r;
	*r = temp;
}

void main() {
	char str[] = "felix";
	swap(str,str + strlen(str)-1);
	printf("after swapping = %s",str);
}
