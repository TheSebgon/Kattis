#include <iostream>
#include <string>

int main()
{
    int count = 0;
    std::string text;
    std::cin >> text;

    for (size_t i = 2; i < text.size();i+=3)
    {
        if (text.at(i-2) != 'P') count++;
        if (text.at(i-1) != 'E') count++;
        if (text.at(i) != 'R') count++;
    }
    std::cout << count;
}