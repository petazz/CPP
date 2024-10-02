#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <cstdlib> // Incluir esta cabecera para usar exit
#include <iomanip>


Phonebook :: Phonebook()
{
	contactCount = 0;
	index = 0;
}

Phonebook :: ~Phonebook()
{
	return ;
}

void Phonebook :: addContact(Contact contact) 
{
	std::string str;
	while(str == "")
	{
		std::cout << "Enter name: ";
		std::getline(std::cin, str);
		if (std::cin.eof() || !std::cin.good())
   			exit(1);
	}
	contact.setFirstName(str);
	str.erase();


	while(str == "")
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, str);
		if (std::cin.eof() || !std::cin.good())
   			exit(1);
	}
	contact.setLastName(str);
	str.erase();


	while(str == "")
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, str);
		if (std::cin.eof() || !std::cin.good())
   			exit(1);
	}
	contact.setNickName(str);
	str.erase();


	while(str == "")
	{
		std::cout << "Enter number: ";
		std::getline(std::cin, str);
		if (std::cin.eof() || !std::cin.good())
   			exit(1);
	}
	contact.setNumber(str);
	str.erase();


	while(str == "")
	{
		std::cout << "Enter secret message: ";
		std::getline(std::cin, str);
		if (std::cin.eof() || !std::cin.good())
   			exit(1);
	}
	contact.setSecret(str);
	str.erase();

	if (contactCount <= 8) {
		contacts[contactCount] = contact;
		contactCount++;
	}
	else {
		contacts[index] = contact;
		index = (index + 1) % 8;
	}
}
std::string truncate(std::string str)
{
	if(str.length() > 10)
		return (str.substr(0, 9) + '.');
	return (str);
}

void Phonebook::searchContact()
{
	std::string str;
	int i = 0;
	
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "| Index | First Name | Last Name | Nickname |" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	while(i < contactCount)
	{
		std::cout << "|" << std::setw(7) << i+1 << "|" << std::setw(12) << truncate(contacts[i].getFirstName()) << "|" << std::setw(11) << truncate(contacts[i].getLastName()) << "|" << std::setw(10) << truncate(contacts[i].getNickName()) << "|" << std::endl;	
		i++;
	}
	while(str == "")
	{
		std::cout << "Enter thhe index of the contact you want to search: ";
		std::cin >> str;
		if (std::cin.eof() || !std::cin.good())
			exit(1);
		int k = atoi(str.c_str());
		if (k >= 0 && k < contactCount)
		{
			std::cout << "Index: " << k << std::endl;
			std::cout << "First Name: " << contacts[k].getFirstName() << std::endl;
			std::cout << "Last Name: " << contacts[k].getLastName() << std::endl;
			std::cout << "Nickname: " << contacts[k].getNickName() << std::endl;
			std::cout << "Phone Number: " << contacts[k].getNumber() << std::endl;
			std::cout << "Secret: " << contacts[k].getSecret() << std::endl;
			k++;
		}
		else
			std::cout << "Invalid index" << std::endl;
		
	}
}
