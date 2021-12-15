#include <iostream>

int main()
{
	int t, n, x, min, max;
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> n;
		std::cin >> x;
		min = max = x;

		for (int y = 1; y < n; y++)
		{
			std::cin >> x;
			if (x > max) max = x;
			if (x < min) min = x;
		}
		std::cout << (max - min) * 2 << std::endl;
	}
}