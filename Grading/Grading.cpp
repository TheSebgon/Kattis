#include <iostream>
#include <string>

int main()
{
	int grades[5];
	int score;

	for (int i = 0; i < 5; i++)
		std::cin >> grades[i];

	std::cin >> score;

	if (score >= grades[0])
		std::cout << "A";
	else if (score >= grades[1])
		std::cout << "B";
	else if (score >= grades[2])
		std::cout << "C";
	else if (score >= grades[3])
		std::cout << "D";
	else if (score >= grades[4])
		std::cout << "E";
	else
		std::cout << "F";
}