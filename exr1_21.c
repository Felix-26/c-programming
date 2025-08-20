#include<stdio.h>

#define IN 1
#define OUT 0

int main() {
	int nc=0,ns=0,i,c,state=OUT;
	while((c=getchar())!=EOF) {
		if(c!='\n') {
			if(c=='.') {
				ns++;
				state=IN;
			} else {
				if((ns+nc)%8==0 && ns>0) {
                    putchar('\t');
                    state=OUT;
					nc+=ns;
					ns=0;
                } else if((ns+nc)%8!=0 && state==IN){
					for(i=0;i<ns;i++) {
						putchar('.');
					}
					nc+=ns;
					ns=0;
				}
				state=OUT;
				nc++;
				putchar(c);
			}
		} else {
			for(i=0;i<ns;i++) {
				putchar('.');
			}
			ns=0;
			nc=0;
		}
	}
}
