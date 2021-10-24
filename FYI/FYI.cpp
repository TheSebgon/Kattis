#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    if (number - 5550000 >= -9999 && number - 5550000 <= 9999)
        std::cout << 1;
    else std::cout << 0;
}