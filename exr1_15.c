#include<stdio.h>

float ctof(float c) {
	return (9.0/5.0)*c + 32;
}

float ftoc(float f) {
	return (5.0/9.0)*(f-32);
}

void main() {
	int choice;
	float temp;
	printf("1.ctof\n2.ftoc\n");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
				printf("enter the temperature in celsius:\n");
				scanf("%f",&temp);
				printf("f = %f",ctof(temp));
				break;
		case 2:
				printf("enter the temperature in farenheit:\n");
                scanf("%f",&temp);
                printf("c = %f",ftoc(temp));
                break;
		default:
				printf("enter a valid option!");
	}
}
