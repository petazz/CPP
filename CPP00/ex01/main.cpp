#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib> // Incluir esta cabecera para usar exit



int main()
{
	Contact contacts[8];
	Phonebook phonebook;
	std::string str;

	std::cout << "Welcome to the phonebook!" << std::endl;
	while(1)
	{
		std::cout << "Enter ADD to add a contact, SEARCH to search for a contact, or EXIT to exit the phonebook." << std::endl;
		std::cin >> str;
		if (str == "ADD")
		{
			Contact contact;
			phonebook.addContact(contact);
		}
		else if (str == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (str == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			exit(0);
		}
	}	
}