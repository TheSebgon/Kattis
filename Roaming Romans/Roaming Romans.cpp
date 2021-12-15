#include <iostream>
#include<cmath>
int main()
{
    double x;
    std::cin >> x;
    std::cout << int(std::round(x * 5280 / 4854 * 1000+0.5));
}