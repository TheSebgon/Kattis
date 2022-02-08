#include <iostream>
#include <string>

int main()
{
	std::string input, str;
	int n;

	std::cin >> input;
	str = input;

	n = input.find('(');
	input.erase(input.begin() + n, input.end());
	str.erase(str.begin(), str.begin() + (n + 2));

	if (input == str)
		std::cout << "correct" << std::endl;
	else
		std::cout << "fix" << std::endl;
}