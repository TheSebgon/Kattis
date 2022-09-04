#include <iostream>

int main()
{
    int blocks;
    std::cin >> blocks;
    int a = 1, b = 1, layers = 0;
    if (blocks >= 1)
    {
        layers++;
        blocks--;
    }
    while (blocks > a * b)
    {
        a += 2; b += 2;
        if (blocks >= a * b)
        {
            blocks -= a * b;
            layers++;
        }
    }
    std::cout << layers;
}