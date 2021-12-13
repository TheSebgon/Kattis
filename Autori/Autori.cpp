#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::getline(std::cin, input);
    std::cout << input[0];
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '-')
        {
            std::cout << input[i + 1];
        }
    }
}