#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int wlc[20],wl=0,i,j;
	int state = OUT;
	char c;

	for(i=0;i<20;i++){
		wlc[i]=0;
	}

	while((c=getchar()) != EOF) {
		/*if(state==OUT && (c==' ' || c=='\n' || c=='\t')) {
			state=OUT;
		}
		else if( state==OUT && ( c!=' ' && c!='\n' && c!='\t' )) {
			state=IN;
			wl++;
		} else if( state==IN && ( c!=' ' && c!='\n' && c!='\t' )) {
			wl++;
		} else if( state==IN && ( c==' ' || c=='\n' || c=='\t' )) {
			state = OUT;
			wlc[wl] += 1;
			wl = 0;
		}*/
		if( c==' ' || c=='\n' || c=='\t' ) {
			if( state==IN ) {
				state = OUT;
				wlc[wl] += 1;
				wl = 0;
			}

		} else {
			if( state==OUT ) {
				state = IN;
				wl = 1;
			} else {
				wl++;
			}
		}
	}
	printf("\n   ");
	for( i=0 ; i<=10 ; i++ ) {
        printf("     %d",i);
    }
    printf("\n");

	for(i=1;i<20;i++){
        printf("%d\t",i);
		for(j=0;j<wlc[i];j++) {
			printf("######");
		}
		printf("\n");
    }
	return 0;
}
