#include <string>
#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"


Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {

}

Phonebook::Phonebook() : nb_contact(0) {
	
}






int main() {
	std::string input;

	std::cout << "Hi, this is ur awesome phonebook :)" << std::endl;
	std::cout << "type ADD to add a new contact" << std::endl;
	std::cout << "type SEARCH to list ur contacts" << std::endl;
	std::cout << "type EXIT to exit" << std::endl;

	while (input != "EXIT") {
		std::getline(std::cin, input);
		if (input == "ADD") {
			std::cout << "adding" << std::endl;
		}
		else if (input == "SEARCH") {
			std::cout << "searching" << std::endl;
		}
		else {
			std::cout << "Sorry i dont understand this" << std::endl;
		}
	}
}