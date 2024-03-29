#include <string>
#include <cctype>
#include <iostream>

void megaphone(std::string input) {
	for (std::string::size_type i = 0; i < input.size(); i++) {
		if (isalpha(input[i])) {
			input[i] = toupper(input[i]);
		}
	}
	std::cout << input;
}

int main(int ac, char **av) {
	if (ac == 1)
		std::cout << " * LOUD AND UNBEARABLE FEEDBSCK NOISE * ";
	else {
		for (int i = 1; i < ac; i++)
			megaphone(av[i]);
	}
	std::cout << std::endl;
	return (0);
}