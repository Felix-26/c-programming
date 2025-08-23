/*Create a simple calculator program using function pointers for
aaddition, subtraction, multiplication, and division.*/

#include<stdio.h>

int add(int a,int b) {
	return a+b;
}

int sub(int a,int b) {
    return a-b;
}

int mul(int a,int b) {
    return a*b;
}

float div(float a,float b) {
    return a/b;
}

int main() {
	int a,b,choice;
	int (*faddptr)(int,int);
	int (*fsubptr)(int,int);
	int (*fmulptr)(int,int);
	float (*fdivptr)(float,float);
	faddptr = add;
	fsubptr = sub;
	fmulptr = mul;
	fdivptr = div;
	while(1) {
		printf("\n1.add\n2.sub\n3.mul\n4.div\n5.exit\nselect one option : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				printf("enter a and b :\n");
				scanf("%d%d",&a,&b);
				printf("sum = %d\n",faddptr(a,b));
				break;
			case 2:
                printf("enter a and b :\n");
                scanf("%d%d",&a,&b);
                printf("difference = %d\n",fsubptr(a,b));
                break;
			case 3:
                printf("enter a and b :\n");
                scanf("%d%d",&a,&b);
                printf("product = %d\n",fmulptr(a,b));
                break;
			case 4:
                printf("enter a and b :\n");
                scanf("%d%d",&a,&b);
                printf("quotient = %.2f\n",fdivptr(a,b));
                break;
			case 5:
					return 0;
			default:
					printf("enter valid option!\n");
		}
	}
	return 0;
}
