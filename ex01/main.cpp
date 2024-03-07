#include "Contact.hpp"
#include "Phonebook.hpp"

int main() {
	Phonebook myPhonebook;
	std::string input;


	std::cout << "Hi, this is ur awesome phonebook :)" << std::endl;
	while (1) {
		std::cout << "type ADD to add a new contact" << std::endl;
		std::cout << "type SEARCH to list ur contacts" << std::endl;
		std::cout << "type EXIT to exit" << std::endl;
		if (!std::getline(std::cin, input))
			return (1);

		if (input == "ADD") {
			myPhonebook.addContacts();
		}
		else if (input == "SEARCH") {
			// if (myPhonebook._nbContact == 0)
			// {
			// 	std::cout << "you dont have any contacts" << std::endl;
			// 	continue;
			// }
			myPhonebook.search();
		}
		else if (input == "EXIT") {
			break;
		}
		else {
			std::cout << "Sorry i dont understand this" << std::endl;
		}
	}
}