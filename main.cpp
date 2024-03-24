#include <iostream>

const std::string VERSION{ "1.0.1" };
const std::string AUTHOR{ "K1r1X" };

int main(void)
{
	std::cout << "It's my program!\nI modified it and added author's name!\nVersion: " << VERSION
		 << std::endl << "Author: " << AUTHOR << std::endl;

	return EXIT_SUCCESS;
}