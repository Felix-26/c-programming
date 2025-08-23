#include <stdio.h>
 /* copy input to output; 1st version */
 int main()
 {
	 int c;
	 c = getchar();
	 while (c != EOF) {
		 putchar(c);
		 printf("%d\t%c\n",c,c);
	 }
	printf("end of file"); 
 }
