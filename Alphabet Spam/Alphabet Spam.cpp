#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string input;
    std::cin >> input;
    double spaces = 0, lower = 0, upper = 0, symbol = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '_') spaces++;
        else if (std::islower(input[i]))lower++;
        else if (std::isupper(input[i]))upper++;
        else symbol++;
    }
    std::cout << std::setprecision(6);
    std::cout << spaces / input.length() << std::endl;
    std::cout << lower / input.length() << std::endl;
    std::cout << upper / input.length() << std::endl;
    std::cout << symbol / input.length() << std::endl;
}