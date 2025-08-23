#include<stdio.h>

void reverse(int *line,int nc) {
	int i,*ptr;
	printf("%ld",sizeof(line));
	for(i=nc;nc>=0;nc--) {
//		ptr = line + nc;
		printf("%c",*(line+nc));
	}
}

int main() {
	int nc=0,c,i,line[100];
	while((c=getchar())!=EOF) {
		nc++;
		if(c!='\n') {
			line[nc]=c;
		} else {
			reverse(line,nc);
		}
	}
}
