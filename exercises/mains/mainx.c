#include<stdio.h>
int x;
void mis() {
	//int x = 2;
	printf("static int x = %d",x);
}
void findsize(){
	short a;
	int b;
	long c;
	float d;
	double e;
	long double f;
	printf("short = %ld\n",sizeof(a));
	printf("int = %ld\n",sizeof(b));
	printf("long = %ld\n",sizeof(c));
	printf("float = %ld\n",sizeof(d));
	printf("double = %ld\n",sizeof(e));
	printf("long double = %ld\n",sizeof(f));
}

void assign(int *arr) {
	int i,*ptr = arr;
	for(i=0;i<10;i++) {
		*ptr = 20 + i;
		printf("%p\t%d\n",ptr,*ptr);
		ptr+=1;
	}
}

int main() {
	/*int i,arr[10];
	assign(arr);
	for(i=0;i<10;i++) {
		printf("%d   ",arr[i]);
	}*/
	mis();
//	findsize();
}
