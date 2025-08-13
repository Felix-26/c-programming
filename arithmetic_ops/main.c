 #include<stdio.h>

int main() {
	int x =2;
	int y = 3;
	int z = 0;
	int a = 10;
	int b = 2;
	
	z = x + y;
	z = x-y;
	z = x*y;
	z = x/y;
	z = a%b;
	x++;
	x+=2;
	x *=2;
	printf("%d\n",z);
	printf("%d\n",x);
	return 0;
}

