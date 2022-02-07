#include <iostream>
#include <string>

int main()
{
	std::string string;

	std::cin >> string;

	if (string.find("ss") != std::string::npos)
		std::cout << "hiss";
	else
		std::cout << "no hiss";
}