#include<stdio.h>

void getlines() {
	int nc=0,spc,i,c;
	while((c=getchar())!=EOF) {
		nc++;
		if(c=='\t') {
			spc = 4-((nc+1)%4);
			for(i=0;i<spc;i++) {
				putchar(' ');
			}
		}
		if(c=='\n')	{
			nc=0;
		}
		else {
			putchar(c);
		}
	}
}

void detab() {
	
}

int main() {
	getlines();
	return 0;
}
