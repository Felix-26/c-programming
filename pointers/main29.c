/*Given "Hello World Program", reverse the string word by word
("Program World Hello") using only pointers.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void reverseByWord(char *string,int len){
	char *temp,**strarr;
	int l,spc=0,x,lw,rw;
	for(int i=0;i<len;i++) {
		if(*(string+i)==' ') {
			spc++;
		}
	}
	strarr = (char **)calloc(spc+1,sizeof(char*));
	if(!(strarr)){
		printf("pointer array memory allocation failed!");
		exit(0);
	}
	l=0;
	x=0;
	for(int i=0;i<=len;i++) {
		if(*(string+i)==' '||*(string+i)=='\0') {
			strarr[x] = (char *)calloc(i-l+1,sizeof(char));
			if(!strarr[x]){
				printf("memory allocation failed!");
				exit(0);
			}
			int m=0;
			for(int j=l;j<i;j++) {
				strarr[x][m++]=string[j];
			}
			strarr[x][m]='\0';
			x++;
			l=(i+1);
		}
	}
	printf("before reversal by word :");
	for(int i=0;i<(spc+1);i++) {
        printf("%s ",*(strarr+i));
    }
	printf("\n");
	lw=0;
	rw=spc;
	while(lw<rw){
		temp = strarr[lw];
		strarr[lw] = strarr[rw];
		strarr[rw] = temp;
		lw++;
		rw--;
	}
	printf("after reversal by word :");
	for(int i=0;i<(spc+1);i++) {
		printf("%s ",*(strarr+i));
	}
}


int main() {
	char str[40];
	printf("enter the string to be reversed by word : ");
	scanf(" %[^\n]",str);
	reverseByWord(str,strlen(str));
}
