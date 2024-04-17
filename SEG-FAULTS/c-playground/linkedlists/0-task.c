#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

//display list
void printlist(){
	struct node *p = head;
	printf("[");

	//start from the beginning
	while (p != NULL){
		printf(" %d ", p -> data);
		p = p -> next;
	}
	printf("]\n");
}


//insert at the beginning
void insertatbegin(int data)
{
	//create a link/node
	struct node *lk = malloc(sizeof(struct node));
	lk -> data = data;

	//point lk to the first old node
	lk -> next = head;

	//point first/head to new node
	head = lk;
}
void main(){
	int k = 0;
	insertatbegin(12);
	insertatbegin(22);
	insertatbegin(30);
	insertatbegin(44);
	insertatbegin(50);
	printf("Linked List: \n");

	//print list
	printlist();
}

