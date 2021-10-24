#include <iostream>

int main()
{
    int a, temp_1,temp_2;
    std::cin >> a;
    temp_1 = a % 10;
    temp_2 = a / 10;

    std::cout << temp_1<<temp_2;
}
