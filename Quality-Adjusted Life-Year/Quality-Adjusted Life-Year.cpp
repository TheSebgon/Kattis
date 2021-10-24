#include <iostream>

int main()
{
    int periods;
    float qualy, years;
    std::cin >> periods;
    float QALY = 0.0;

    for (int i = 0; i < periods; i++)
    {
        std::cin >> qualy >> years;
        QALY += qualy * years;
    }
    std::cout << QALY;
}

