/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {

	if (head==nullptr)
	    return -1;
	if (!head->next)
		return head->num;
	int count = 1;
	struct node *p = head;
	while (p->next)
	{
		p = p->next;
		count++;
		if (count % 2 != 0)
			head = head->next;
	}
	if (count % 2 == 0)
		return (head->num + head->next->num) / 2;
	else return head->num;
}
