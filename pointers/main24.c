/*Implement your own version of strstr(substring()) using pointers.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getString(char **str) {
	char temp[30];
	scanf(" %[^\n]",temp);
	temp[strlen(temp)+1] = '\0';
	int n = strlen(temp);
	*str = (char *)calloc(n,sizeof(char));
	if(!*str) {
		printf("memory allocation failed!\n");
		exit(0);
	}
	strcpy(*str,temp);
}

char *subString(char *str,int l,int r) {
	char *temp;
	int i,j;
	temp = (char *)calloc(r-l,sizeof(char));
	for(i=l;i<r+1;i++) {
		temp[j++]=*(str+i);
	}
	temp[j]='\0';
	return temp;
}

int main() {
	char *str=NULL,*newstr=NULL;
	int l,r;
	printf("enter the string : ");
	getString(&str);
	printf("starting index and ending index : ");
	scanf("%d%d",&l,&r);
	newstr = subString(str,l,r);
	printf("new substring = %s",newstr);
	return 0;
}
