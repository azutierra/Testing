#include "List.h"
#include <stdio.h>
#include <string.h>

List::List()
{
	head = 0;
}

void List::Add(char* value)
{
	if (head == 0)
		head = new Node(value);
	else
	{
		Node* item = head;
		while (item->next != 0)
			item = item->next;

		item->next = new Node(value);
	}
}

void List::Print()
{
	Node* item = head;
	while (item != 0)
	{
		printf("%s ", item->value);
		item = item->next;
	}
}

void List::Remove(char* value)
{
	Node* item = head;
	Node* pref = 0;
	while (item != 0)
	{
		if (!strcmp(value, item->value))
		{
			if (item == head)
				head = head->next;
			else
			if (item->next == 0)
				pref->next = 0;
			else
				pref->next = item->next;

			break;
		}
		pref = item;
		item = item->next;
	}
}