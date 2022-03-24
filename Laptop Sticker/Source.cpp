#include <iostream>

int main()
{
	int wc, hc, ws, hs;
	std::cin >> wc >> hc >> ws >> hs;
	ws++;
	hs++;

	if (wc > ws && hc > hs)
		std::cout << 1;
	else
		std::cout << 0;
}