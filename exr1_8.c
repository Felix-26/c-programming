#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int i,state,ws = 0;
	char c,arr[30];

	state = OUT;
	while((c = getchar()) != EOF) {
		if((c == ' ' || c == '\n' || c == '\t') && state == IN) {
			for(i=0;i<ws;i++) {
				printf("%c",arr[i]);
			}
			printf("\n");
			ws = 0;
			state = OUT;
		}
		else if(state == OUT && (c != ' ' && c != '\n' && c != '\t' )) {	
			arr[ws] = c;
			ws++;
			state = IN;
		}
		else if(state == IN && (c != ' ' && c != '\n' && c != '\t' )) {
			arr[ws] = c;
			ws++;
		}
	}
}
