#include <iostream>
#include <string>

int main()
{
    std::string cpr;
    std::cin >> cpr;
    cpr.erase(cpr.begin() + 6);
    int sum = 0;
    for (size_t i = 0, count = 4; i < cpr.length(); i++, count--)
    {
        sum += count * (static_cast<int>(cpr.at(i)) - 48);
        if (count == 2 && i == 2) count = 8;
    }
    if(sum%11==0) std::cout <<"1";
    else std::cout << "0";
}