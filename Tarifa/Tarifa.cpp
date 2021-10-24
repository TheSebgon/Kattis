#include <iostream>
#include <vector>

int main()
{
    int tarifa, months, temp;
    std::cin >> tarifa >> months;
    std::vector<int>spends;
    for (int i = 0; i < months; i++)
    {
        std::cin >> temp;
        spends.push_back(temp);
    }
    temp = tarifa;
    for (int i = 0; i < months; i++)
    {
        temp += (tarifa - spends[i]);
    }
    std::cout << temp;
}