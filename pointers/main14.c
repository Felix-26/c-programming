/*Implement your own version of strcpy using only pointers.*/

#include<stdio.h>
#include<stdlib.h>

void stringCopy(char *string1,int size,char **string2) {
	int i;
	*string2 = (char *)calloc(size,sizeof(char));
	if(*string2 == NULL) {
		printf("memory allocation failed");
		return;
	}
	for(i=0;i<size;i++) {
		*(*(string2)+i)=*(string1+i);
	}
}

int main() {
	char str1[] = "felix";
	char *str2=NULL;
	int i,len=sizeof(str1);
	printf("size of str1 = %ld\n",sizeof(str1));
	stringCopy(str1,len,&str2);
	for(i=0;i<sizeof(str2);i++)  {
		printf("%p		%c\n",str2+i,str2[i]);
	}

	printf("str1 = %s\n",str1);
	printf("str2 = %s\n",str2);
	printf("size of str2 = %ld\n",sizeof(str2));
	free(str2);
	return 0;
}
