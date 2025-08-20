#include<stdio.h>

#define MAXLEN 100


int main() {
	int nc=0,i,c;
	char buf[1000];
	while((c=getchar())!=EOF) {
		if(c!='\n') {
			nc++;
			if(nc>MAXLEN) {
				buf[nc-MAXLEN-1]=c;
//				printf("number of chars = %c",nc);
			}
		} else {
			printf("\nnumber of chars = %d\n",nc);

			for(i=0;i<nc-MAXLEN;i++) {
				printf("%c",buf[i]);
			}
			nc = 0;
		}
	}
}
