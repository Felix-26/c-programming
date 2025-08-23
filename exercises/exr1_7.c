#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c,nl,nw,nc,state;

	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF) {
		++nc;
		if(c == '\n') {
			++nl;
		}
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if(state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("\nnumber of words\t: %d\nnumber of lines\t: %d\nnumber of characters\t:%d",nw,nl,nc);
}
