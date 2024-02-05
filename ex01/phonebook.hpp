#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class Contact;
class Phonebook {
	public:
		Phonebook(void);
		~Phonebook();
		void addContacts(void);
		void lstAllContacts(void);
		void search(void);
		std::string fixStrLen(std::string);

	private:
		Contact _contacts[8];
		int 	_nbContact;
};

#endif