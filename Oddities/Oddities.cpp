#include <iostream>

int main()
{
	int n, x;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		if (x % 2)std::cout << x << " is odd" << std::endl;
		else std::cout << x << " is even" << std::endl;
	}
}