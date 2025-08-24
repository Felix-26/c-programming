/*Write a function that calculates both the sum and product of two 
integers and returns them through pointer parameters.*/

#include<stdio.h>

void calculate(int a,int b,int *sum,int *pro) {
	*sum = a+b;
	*pro = a*b;
}

int main() {
	int x=5,y=3;
	int s,p;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&x,&y);
	calculate(x,y,&s,&p);
	printf("sum = %d\n",s);
	printf("product = %d\n",p);
	return 0;
}
