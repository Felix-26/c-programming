#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int state=OUT,wc=0,wlc[20],wl,i,j;
	char c;

	for(i=0;i<20;i++) {
		wlc[i] = 0;
	}

	while(( c=getchar() ) != EOF ) {
		if( c==' ' || c=='\n' || c=='\t' ) {
			if( state==IN ) {
				state = OUT;
				wlc[wl] += 1;
				wc++;
				wl=0;
			}
		} else {
			if( state==OUT ) {
				state = IN;
				wl = 1;
			} else {
				wl+=1;
			}
		}
	}

	for(i=0;i<20;i++) {
		wlc[i] = wlc[i]/wl;
	}
	printf("\n");
	for(i=0;i<20;i++) {
		printf("\t%d\t",i);
		for(j=0;j<wlc[i];j++) {
			printf("#####");
		}
		printf("\n");
	}
}
