#include<stdio.h>

int lower(int c) {
	if(c>='A' && c<='Z') {
		return c-'A'+'a';
	} else {
		return c;
	}
}

void converter(char s[]) {
	int i=0,l;
	while(s[i]!='\0') {
		l = lower(s[i]);
		printf("%c",l);
		i++;
	}
}

int atoi(char s[]) {
	int i,n;
	n=0;
	for(i=0;s[i]>='0'&&s[i]<='9';i++) {
		n = 10*n + (s[i] - '0');
	}
	return n;
}

int main() {
	char s[10]="10293892";
	char r[10]="FELIX";
	converter(r);
	int n = atoi(s);
	printf("%d\n",n);
	return 0;
}
