#include "Contact.hpp"
#include <string>

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

/////////////////////Getters/////////////////////

std::string Contact::getFirstName() const {
    return FirstName;
}

std::string Contact::getLastName() const {
    return LastName;
}

std::string Contact::getNickName() const {
    return NickName;
}

std::string Contact::getNumber() const {
    return Number;
}

std::string Contact::getSecret() const {
    return Secret;
}

//////////////////// Setters/////////////////////
void Contact::setFirstName(std::string str) {
    FirstName = str;
}

void Contact::setLastName(std::string str) {
    LastName = str;
}

void Contact::setNickName(std::string nickname) {
    NickName = nickname;
}

void Contact::setNumber(std::string number) {
    Number = number;
}

void Contact::setSecret(std::string secret) {
    Secret = secret;
}