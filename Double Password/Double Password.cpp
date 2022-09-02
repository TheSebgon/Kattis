#include <iostream>
#include <string>

int main()
{
    int x = 1;
    std::string p1, p2;
    std::cin >> p1 >> p2;
    
    for (int i = 0; i < 4; i++)
        if (p1[i] != p2[i]) x *= 2;
        else x *= 1;
    std::cout << x;
}