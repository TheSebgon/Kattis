#include <iostream>
#include <iomanip>

int main()
{
	double a, b;
	std::cin >> a;
	b = 100 - a;
	std::cout << std::fixed << std::showpoint;
	std::cout << std::setprecision(11);
	std::cout << 100 / a << std::endl;
	std::cout << 100 / b;
}