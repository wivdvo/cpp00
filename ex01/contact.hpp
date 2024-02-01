#include <string>

class Contact {
	public:
		Contact();
		~Contact();
		void addContact(Contact *contact);
		void lstContacts();

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};