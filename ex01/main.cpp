#include "contact.hpp"
#include "phonebook.hpp"

int main() {
	Phonebook myPhonebook;
	std::string input;

	std::cout << "Hi, this is ur awesome phonebook :)" << std::endl;
	std::cout << "type ADD to add a new contact" << std::endl;
	std::cout << "type SEARCH to list ur contacts" << std::endl;
	std::cout << "type EXIT to exit" << std::endl;

	while (1) {
		if (!std::getline(std::cin, input))
			return (1);

		if (input == "ADD") {
			myPhonebook.addContacts();
		}
		else if (input == "SEARCH") {
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