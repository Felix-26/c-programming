/*Write a program to implement a singly linked list with insert, delete, 
and traverse operations using pointers.*/

#include<stdio.h>
#include<stdlib.h>


struct Node {
	int data;
	struct Node *next;
};

struct Node* traverseLL(struct Node *head) {
    while(head->next!=NULL) {
        head = head->next;
    }
    return head;
}

void insertNode(struct Node *head) {
	struct Node *lastNode = traverseLL(head);
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	lastNode->next = newNode;
	printf("enter the value to be inserted : ");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
}

void deleteNode(struct Node *head) {
	while(head->next->next) {
        head = head->next;
    }
    free(head->next);
	head->next = NULL;
}

int main() {
	struct Node *head = NULL;
	head = (struct Node*)malloc(sizeof(struct Node));
	head->data = 1;
	head->next = NULL;
	insertNode(head);
	insertNode(head);
	insertNode(head);
	deleteNode(head);
	while(head) {
		printf("%d -> ",head->data);
		head = head->next;
	}
	printf("NULL");
	return 0;
}
