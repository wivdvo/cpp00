#include "Contact.hpp"
#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _nbContact(0), _index(0) {
	
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
		if (!std::getline(std::cin, firstName))
			return ;
	}
	while (lastName.empty())
	{
		std::cout << "enter last name:" <<std::endl;
		if (!std::getline(std::cin, lastName))
			return ;
	}
	while (nickName.empty())
	{
		std::cout << "enter nick name:" <<std::endl;
		if (!std::getline(std::cin, nickName))
			return ;
	}
	while (phoneNumber.empty())
	{
		int	flag = 0;
		std::cout << "enter phonenumber:" <<std::endl;
		if (!std::getline(std::cin, phoneNumber))
			return ;
		if (phoneNumber[0] != '+' && std::isdigit(phoneNumber[0]) == 0)
		{

			phoneNumber.clear();
			continue;
		}
		for (size_t i = 1; i < phoneNumber.size() && !flag; i++)
			flag = !std::isdigit(phoneNumber[i]);
		if (flag) {
			phoneNumber.clear();
			continue;
		}
	}
	while (darkestSecret.empty())
	{
		std::cout << "enter darkest secret:" <<std::endl;
		if (!std::getline(std::cin, darkestSecret))
			return ;
	}

	Contact newContact = Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);


	
	if (_index == 8)
		_index = 0;

	_contacts[_index] = newContact;
	_index++;
	if (_nbContact < 8)
	{
		_nbContact++;
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

	return (og);
}

void Phonebook::search(void) {
	int i = 0;
	int	nbInput;
	std::string input;

	if (_nbContact == 0)
	{
		std::cout << "Add a contact first!" << std::endl << std::endl;
		return;
	}
	std::cout << "        nb| FirstName|  LastName|  Nickname" << std::endl;
	for (i = 0; i < _nbContact; i++) {
		std::cout << std::setw(10) << i 
					<< "|" << std::setw(10) << fixStrLen(_contacts[i].retFirstName()) 
					<< "|" << std::setw(10) << fixStrLen(_contacts[i].retLastName()) 
					<< "|" << std::setw(10) << fixStrLen(_contacts[i].retNickName()) << std::endl;
	}
	std::cout << std::endl;

	while (1) {
		std::cout << "      input number of contact to get full info" << std::endl;
		if (!std::getline(std::cin, input))
			return ;
		if (input.size() > 1) {
			continue;
		}
		if (!std::isdigit(input[0]))
			continue;
		std::istringstream iss(input);
		iss >> nbInput;
		(void)input;
		if (nbInput >= 0 && nbInput <= _nbContact - 1) {
			break;
		}
	}
	_contacts[nbInput].lstOneContact();
}







