#include "Contacts.h"

Contacts::Contacts()
{
	name = "james";
	number = 10;

}

string Contacts::getName()
{
	return name;
}


void Contacts::setName(string newname)
{
	name = newname;
}


int Contacts::getNumber()
{
	return number;
}


void Contacts::setNumber(int no)
{
	number = no;
}

ostream& operator<<(ostream& str, const Contacts& myContact)
{
	str << myContact.name << " " << myContact.number << endl;
	
	return str;

}
