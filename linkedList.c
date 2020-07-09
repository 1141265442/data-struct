#include <stdio.h>

typedef struct LNode 
{
	int data;
	struct LNode *next;
}LNode;


void main() {
	//ͷ�巨
	/*LNode *head,*n;
	int num;
	head = (LNode *)malloc(sizeof(LNode));
	head->next = NULL;

	while (1)
	{
		scanf("%d", &num);
		if ( num!= -1) {
			n = (LNode *)malloc(sizeof(LNode));
			n->data = num;
			n->next = head->next;
			head->next = n;
		}
		else {
			break;
		}
	}*/
	/*while (head->next != NULL)
	{
		printf("%d\t", head->next->data);
		head = head->next;
	}*/
	//β�巨
	LNode *tail, *q,*head;
	int num;
	head = (LNode *)malloc(sizeof(LNode));
	head->next = NULL;
	tail = head;

	while (1) {
		scanf("%d",&num);
		if (num != -1) {
			q = (LNode *)malloc(sizeof(LNode));
			q->data = num;
			q->next=tail->next;
			tail->next=q;
			tail=q;
		}
		else {
			break;
		}
	}
	while (head->next!=NULL) {
		printf("%d\t",head->next->data);
		head=head->next;
	}
}
