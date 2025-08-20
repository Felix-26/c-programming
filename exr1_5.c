#include<stdio.h>

int main() {
	int c;
	if((c = getchar())!=EOF) {
		printf("1\n");
	} else {
		printf("0\n");
	}
}
