#include "Phonebook.hpp"
#include "Contact.hpp"

Contact::Contact(void) {

}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) 
			: _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret) {

}

Contact::~Contact() {

}

void Contact::lstOneContact(void) const{
	std::cout << "first name: " << _firstName << std::endl;
	std::cout << "last name: " << _lastName << std::endl;
	std::cout << "nick name: " << _nickName << std::endl;
	std::cout << "phone number: " << _phoneNumber << std::endl;
	std::cout << "darkest secret: " << _darkestSecret << std::endl;
}

std::string Contact::retFirstName(void) const{
	return (_firstName);
}

std::string Contact::retLastName(void) const{
	return (_lastName);
}

std::string Contact::retNickName(void) const{
	return (_nickName);
}