#pragma once

#include <string>
#include <sstream>

class Contact {
	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		~Contact();
		void lstOneContact(void) const;
		std::string retFirstName(void) const;
		std::string retLastName(void) const;
		std::string retNickName(void) const;

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};
