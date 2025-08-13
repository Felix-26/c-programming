#include<stdio.h>
#include<string.h>
int main() {
	char item[50] = "";
	float price =0.0f;
	int quantity = 0;
	char currency = '$';
	float total = 0.0f;
	int i=0;
	printf("what items would you like to buy?\n");
	fgets(item,sizeof(item),stdin);
	item[strlen(item)-1] = '\0';

	printf("what is the price for each?\n");
	scanf("%f",&price);

	printf("how many would you like?:\n");
	scanf("%d",&quantity);

	total = price * quantity;
	
	printf("You have bought %d %s\n",quantity,item);
	printf("%c%.2f\n",currency,total);

	return 0;
}
