/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
struct node * iter1, *iter2;
struct node * sortLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	else
	{
		int temp;
		for (iter1 = head; iter1 != NULL; iter1 = iter1->next)
		{
			for (iter2 = iter1->next; iter2 != NULL; iter2 = iter2->next)
			{
				if ((iter1->num)>(iter2->num))
				{
					temp = iter1->num;
					iter1->num = iter2->num;
					iter2->num = temp;
				}
			}
		}
		return head;
	}
}