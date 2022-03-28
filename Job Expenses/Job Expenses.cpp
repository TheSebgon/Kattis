#include <iostream>

int main()
{
    int a, temp, sum = 0;
    std::cin >> a;
    for (int i = 0; i < a; i++)
    {
        std::cin >> temp;
        if (temp < 0)
            sum += temp;
    }
    std::cout << -sum;
}