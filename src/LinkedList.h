#ifndef LinkedList_H
#define LinkedList_H

typedef struct
{
	void *head;
	void *tail;
} LinkedList;

void List_addTail(LinkedList *list, void *element);
void *List_removeHead(LinkedList *list);
LinkedList List_create();

#endif // LinkedList_H
