/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	if (head==NULL)
	    return NULL;
	struct node *p = head, *r;
	if (p->next)
	   head = p->next;
	else return head;
	r = head->next;
	p->next = NULL;
	while (r)
	{
		head->next = p;
		p = head;
		head = r;
		r = r->next;
	}
	head->next = p;
	return head;
}
