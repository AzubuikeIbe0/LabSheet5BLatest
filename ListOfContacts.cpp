#include "ListOfContacts.h"
#include "ListOfContacts.h"
#include "Contacts.h"



ListOfContacts::ListOfContacts()
{
	head = nullptr;
}

bool ListOfContacts::insertFront(Contacts newContact)
{
	// STEP 1
	NodeOfContacts* newNode = new NodeOfContacts(); // Create a new NodeOfContacts

	// STEP 2
	newNode->theContact = newContact; // Assign a contact data

	// STEP 3
	newNode->next = head; // Make the next node of the newNode as head

	// STEP 4
	head = newNode; // Set newNode as head

	return true;
}



void ListOfContacts::displayList() const
{

	NodeOfContacts* temp = head;
	if (head != nullptr)
	{
		while (temp != nullptr)
		{
			std::cout << temp->theContact << endl;
			temp = temp->next;
		}
	}

}




Contacts ListOfContacts::deleteFront()
{
	Contacts dummy;
	// STEP 1
	if (head == nullptr) { // Check if there is not node
		return dummy;
	}

	// STEP 2
	NodeOfContacts* temp = head; // Create a pointer to the head

	// STEP 3
	head = head->next; // Move the head pointer to the next node

	// STEP 4
	dummy.setNumber((temp->theContact).getNumber());
	dummy.setName((temp->theContact).getName());
	delete temp; // Delete the first node

	// STEP 5
	return dummy;// Return the value of the deleted node
}


ListOfContacts::~ListOfContacts()
{
	while (head) // While the list is not empty
	{

		NodeOfContacts* temp = head; //Set a temporary pointer to point to the first item on the list

		head = head->next; // Move the head pointer to the next node in the list

		delete temp; // Delete the first node, ie the one the temp pointer is pointed to

	} // End while
}


ostream& operator<<(ostream& str, const ListOfContacts& myList)
{

	cout << "Display list below" << endl;
	myList.displayList();
	return str;

} 