#include <iostream>

int main()
{
    int G, S, C, sum = 0;
    std::cin >> G >> S >> C;
    G *= 3;
    S *= 2;
    sum += G + S + C;
    if (sum > 1) 
    {
        if (sum > 7) std::cout << "Province";
        else if (sum > 4) std::cout << "Duchy";
        else std::cout << "Estate";
        std::cout << " or ";
    }

    if (sum > 5) std::cout << "Gold" << std::endl;
    else if (sum > 2) std::cout << "Silver" << std::endl;
    else std::cout << "Copper" << std::endl;
}