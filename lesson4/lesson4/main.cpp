#include "List.h"
#include <conio.h>

void main()
{
	List* list = new List();
	list->Add("1");
	list->Add("2");
	list->Add("3");

	list->Remove("2");
	list->Print();
	getche();
}