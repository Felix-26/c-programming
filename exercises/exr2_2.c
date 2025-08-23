#include<stdio.h>

void forloop() {
	int s[10],i=0,lim=10,c;
	while(i<lim-1&&(c=getchar())!='\n'&&c!=EOF) {
		s[i] = c;
		printf("%c",s[i]);
		i++;
	}
}

int main() {
	forloop();
}
