#include <iostream>

int main()
{
    int Javelins, lenght;
    std::cin >> Javelins;
    int SumLenght = 1;
    for (int i = 0; i < Javelins; i++)
    {
        std::cin >> lenght;
        SumLenght += lenght - 1;
    }
    std::cout << SumLenght;
}