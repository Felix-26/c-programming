#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c,i,state;
	while((c = getchar())!=EOF) {
		if (state==IN) {
			if(c!='\n') {
				printf("%c",c);
			} else {
				state = OUT;
				printf("\n");
			}
		} else {
			if(c==' '||c=='\t'||c=='\n') {
				putchar('\0');
			} else {
				state = IN;
				printf("%c",c);
			}
		}
	}
}
