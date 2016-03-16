/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};
struct node *head;
void insert(int data)
{
	struct node * temp = (struct node*)malloc(sizeof(struct node));
	temp->num = data;
	temp->next = head;
	head = temp;
}
struct node * numberToLinkedList(int N) {
	head = NULL;
	int num = N, i;
	if (num < 0)
		num = -N;
	if (num == 0)
		insert(num);
	while (num != 0)
	{
		i = num % 10;
		insert(i);
		num = num / 10;
	}
	return(head);
}