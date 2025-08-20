#include<stdio.h>
#define MAXLEN 1000

int getline2(char s[],int lim) {
    int i,c;
    for(i=0; i< lim-1 && (c=getchar())!=EOF && c!='\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[],char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

int main() {
	int len,max;
	char line[MAXLEN];
	char longest[MAXLEN];

	max = 0;
	while((len = getline2(line,MAXLEN)) > 0 ) {
		if(len > max) {
			max = len;
			copy(longest,line);
		}
	}
	printf("\n");
	if(max>0) {
		printf("%s",longest);
	}
}

