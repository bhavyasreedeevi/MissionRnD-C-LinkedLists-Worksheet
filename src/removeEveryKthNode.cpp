/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
struct node {
	int num;
	struct node *next;
};
struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL||K<=1)
		return NULL;
	int count = 0, i;
	struct node *curr,*temp,*temp1;
	curr = head;
	for (curr = head; curr != NULL;curr=curr->next)
	{
		count=count+1;
	}
	if (K>count)
		return head;
	else
	{
		temp = head;
		temp1 = temp;
		for (i = 1; i <= count; i++)
		{
			if (i % K == 0)
				temp1->next = temp->next;
			temp1 = temp;
			temp = temp->next;
		} 
	}
	return(head);
}