/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	if (head1 == nullptr || head2 == nullptr)
	{
		if (head1 == head2)
			return NULL;
		if (head1)
			return head1;
		else return head2;
	}
	struct node *p = NULL,*result=NULL,*point=NULL;
	while (head1&&head2)
	{
		if (head1->num <= head2->num)
		{
			p = head1;
			head1 = head1->next;
		}
		else{
			p = head2;
			head2 = head2->next;
		}
		p->next = NULL;
		if (result == NULL)
			result = p;
		else point->next = p;
		point = p;
	}
	if(head1)
		point->next = head1;
	else point->next = head2;
	return result;
}
