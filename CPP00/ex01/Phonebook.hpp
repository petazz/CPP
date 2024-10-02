#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook {
	private :
		Contact contacts[8];
		int contactCount;
		int index;
	public :
		Phonebook();
		~Phonebook();
		void addContact(Contact contact);
		void searchContact();
		void printContacts();
};

#endif