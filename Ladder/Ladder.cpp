#include <iostream>
#include <cmath>

int main()
{
	double high, angle;
	double pi = 3.14159265359;
	std::cin >> high >> angle;
	angle = angle * (pi / 180);		//degree to radian
	std::cout << std::ceil(high / sin(angle));
}