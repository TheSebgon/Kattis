#include <iostream>
#include <vector>

void calculate()
{
	int temp,sum = 0;
	std::vector<int> turtles;
	std::cin >> temp;
	while (temp != 0)
	{
		turtles.push_back(temp);
		std::cin >> temp;
	}

	for (int i = 1; i < turtles.size(); i++)
	{
		if (turtles.at(i) > turtles.at(i - 1) * 2)
			sum += turtles.at(i) - turtles.at(i - 1) * 2;
	}
	std::cout << sum << std::endl;
}

int main()
{
	int T;
	std::cin >> T;
	for (int i = 0; i < T; i++)
		calculate();
}