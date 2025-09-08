/*Implement a stack using a linked list where push, pop, and peek 
operations use pointers.*/

#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void display(struct Node *head) {
	if(!head) {
		printf("stack empty!\n");
	}
	while(head) {
		printf("%d -> ",head->data);
		head=head->next;
	}
	printf("top\n");
}

void pop(struct Node *head) {
	if(!head) {
		printf("stack empty popping not possible!\n");
	}

	while(head->next->next) {
		head=head->next;
	}
	printf("top popped = %d\n",head->next->data);
	head->next = NULL;
}

void peek(struct Node *top) {
	printf("top = %d\n",top->data);
}

struct Node* push(struct Node *head) {
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	int x;
	if(!newNode) {
		printf("memory allocation failed!");
		exit(1);
	}
	printf("enter content : \n");
	scanf("%d",&x);

	newNode->data = x;
	newNode->next = NULL;

	if(!head) {
		head = newNode;
		return head;
	} else {
		while(head -> next) {
			head=head->next;
		}
		head->next = newNode;
	}
}

int main() {
	struct Node *head = NULL;
	if(!head) {
		head = push(head);
	}
	push(head);
	push(head);
	push(head);
	display(head);
	pop(head);
	pop(head);
	display(head);
	pop(head);
	pop(head);
	pop(head);
}
