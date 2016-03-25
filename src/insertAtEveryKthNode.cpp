/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	if (head==nullptr||K<=0)
	   return NULL;
	struct node *p=head,*q;
	int count=1;
	while (p)
	{
		if (count == K)
		{
			q = (struct node*)malloc(sizeof(struct node));
			q->num = K;
			q->next = p->next;
			p->next = q;
			p = p->next;
			count = 0;
		}
		p = p->next;
		count++;
	}
	return head;
}
