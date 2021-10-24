#include <iostream>
#include <string>

int main()
{
    int a, b;
    std::string describe;
    std::cin >> a >> b;
    for (int i=0;i<a;i++)
        getline(std::cin, describe);
    std::cin.get();
    std::cout << b;
}
