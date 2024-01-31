#include <string>
#include <cctype>
#include <iostream>

void megaphone(std::string input) {
	for (std::string::size_type i = 0; i < input.size(); i++) {
		if (isalpha(input[i])) {
			input[i] = toupper(input[i]);
		}
	}
	std::cout << input << std::endl;
}

int main(int ac, char **av) {
	if (ac == 1)
		std::cout << " * LOUD AND UNBEARABLE FEEDBSCK NOISE * " << std::endl;
	else {
		for (int i = 1; i < ac; i++)
			megaphone(av[i]);
	}
	return (0);
}