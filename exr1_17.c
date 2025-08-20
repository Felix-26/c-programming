#include<stdio.h>

void printline80(char *buf,int nc) {
	int i;
	for(i=0;i<nc;i++) {
		printf("%c",*buf);
		buf += 1;
    }
}

void getlines80() {
	char buf[1000];
    int i,c,nc = 0;
	while((c=getchar())!=EOF) {
        if(c!='\n') {
            buf[nc] = c;
            nc++;
        } else {
            if(nc>=80) {
				printline80(buf,nc);
                /*printf("\n");
                for(i=0;i<nc;i++) {
                    printf("%c",buf[i]);
                }
				*/
            }
            nc = 0;
        }
    }
}

int main() {
	getlines80();
}
