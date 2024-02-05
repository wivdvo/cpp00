#include "contact.hpp"
#include "phonebook.hpp"

Phonebook::Phonebook(void) : _nbContact(0) {
	
}

Phonebook::~Phonebook() {

}

void Phonebook::addContacts(void) {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	while (firstName.empty())
	{
		std::cout << "enter first name:" <<std::endl;
		std::getline(std::cin, firstName);
	}
	while (lastName.empty())
	{
		std::cout << "enter last name:" <<std::endl;
		std::getline(std::cin, lastName);
	}
	while (nickName.empty())
	{
		std::cout << "enter nick name:" <<std::endl;
		std::getline(std::cin, nickName);
	}
	while (phoneNumber.empty())
	{
		std::cout << "enter phonenumber:" <<std::endl;
		std::getline(std::cin, phoneNumber);
	}
	while (darkestSecret.empty())
	{
		std::cout << "enter darkest secret:" <<std::endl;
		std::getline(std::cin, darkestSecret);
	}

	Contact newContact = Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	if (_nbContact < 8)
	{
		_contacts[_nbContact] = newContact;
		_nbContact++;
	}
	else {
		_contacts[0] = _contacts[1];
		_contacts[1] = _contacts[2];
		_contacts[2] = _contacts[3];
		_contacts[3] = _contacts[4];
		_contacts[4] = _contacts[5];
		_contacts[5] = _contacts[6];
		_contacts[6] = _contacts[7];
		_contacts[7] = newContact; 
	}
}

void Phonebook::lstAllContacts(void) {
	int i = 0;

	while (i < _nbContact) {
		_contacts[i].lstOneContact();
		i++;
	}
}

std::string Phonebook::fixStrLen(std::string og) {
	int len = og.size();
	std::string fixed;

	if (len > 10) {
		og.resize(9);
		og +=  ".";
	}
	else if (len < 10) {
		og.resize(10, ' ');
	}

	return (og);
}

void Phonebook::search(void) {
	int i = 0;
	int	nbInput;
	std::string input;

	for (i = 0; i < _nbContact; i++) {
		std::cout << std::setw(10) << i 
					<< "|" << fixStrLen(_contacts[i].retFirstName()) 
					<< "|" <<  fixStrLen(_contacts[i].retLastName()) 
					<< "|" << fixStrLen(_contacts[i].retNickName()) << std::endl;
	}
	while (1) {
		std::cout << "input number of contact to get full info" << std::endl;
		std::cin, input;
		std::istringstream iss(input);
		iss >> nbInput;
		if (nbInput >= 0 && nbInput <= 7)
			break;
		else
			std::cout << "try again" << std::endl;
	}
	std::cout << _contacts[nbInput].lstOneContact << sdt::endl;

}







