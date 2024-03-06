#pragma once

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class Contact;
class Phonebook {
	public:
		Phonebook(void);
		~Phonebook();
		void search(void);
		void addContacts(void);

	private:
		Contact _contacts[8];
		int 	_nbContact;
		int		_index;

		void lstAllContacts(void);
		std::string fixStrLen(std::string);
};
