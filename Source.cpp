#include "Contacts.h"
#include "NodeOfContacts.h"
#include "ListOfContacts.h"

int main()
{

	Contacts C;
	cout << C;

	ListOfContacts L;

	L.insertFront(C);
	L.insertFront(C);

	L.displayList();

	L.deleteFront();

	/*cout << L << endl;*/

	L.deleteFront();
	
	L.displayList();
	
	L.~ListOfContacts();
	return 0;
}