#include <string>
#include "contact.hpp"

class Phonebook {
	public:
		Phonebook();
		~Phonebook();

		void addContact(const std::string& firstName, const std::string& lastName, const std::string& nickname,
				const std::string& phoneNumber, const std::string& darkestSecret) {
		}

		// contact findContact() {

		// }

	private:
		Contact contacts[8];
		int nb_contact;



};