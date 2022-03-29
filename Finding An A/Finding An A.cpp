#include <iostream>
#include <string>

int main()
{
    int a;
    std::string s;
    std::cin >> s;
    a=s.find('a');
    s.erase(0, a);
    std::cout << s;
}