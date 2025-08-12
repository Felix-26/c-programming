#include<stdio.h>

int main(){
	int x;           //declaration
	x = 123;		//initialization
	int y = 321;	//delaration + initialization

	int age = 23;   // integer
	float cgpa = 7.29;//floating point number
	char grade = 'C'; //character
	char name[] = "Felix Thomas";

	printf("Hello %s\n",name);
	printf("You are %d years old\n",age);
	printf("Your average grade is %c\n",grade);
	printf("Your cgpa is %f\n",cgpa);

	return 0;
}
