#include <iostream>
#include <string>

int main()
{
    int count;
    std::string words[10];
    std::cin >> count;
    for (int i = 0; i < count; i++)
        std::cin >> words[i];
    std::cout << "\n\n\n";

    for (int i = 0; i < count; i++)
    {
        if (i % 2 == 0)
            std::cout << words[i]<<"\n";
    }
}

