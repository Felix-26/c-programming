/*Write a function that concatenates two strings using pointers.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int getString(char **string) {
	int c,nc=0;
	char *temp;
	while((c=getchar())!='\n') {
		temp = realloc(*string,nc*sizeof(char));
		if(!temp) {
			printf("memory not allocated!");
			return 0;
		}
		*string=temp;
		*(*(string)+nc) = (char)c;
		nc++;
	}
	nc++;
	*(*(string)+nc) = '\0';
	return nc;
}

void concatString(char **str1,char **str2,int n,int m) {
	int i,j=0;
	char *temp = realloc(*str1,(n+m)*sizeof(char));
	*str1 = temp;

	for(i=n-1;i<m+n;i++) {
		*(*(str1)+i) = *(*(str2)+j);
		j++;
	}
}

int main() {
	int n,m;
	char *str1=NULL,*str2=NULL;
	printf("enter the string1 : ");
	n = getString(&str1);
	printf("enter the string2 : ");
	m = getString(&str2);
	printf("concatenated string : ");
	concatString(&str1,&str2,n,m);
	printf("%s",str1);
	return 0;
}
