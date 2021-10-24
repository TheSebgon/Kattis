#include <iostream>

int main()
{
    int cases, r, e, c;
    std::cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        std::cin >> r >> e >> c;
        if (e > r + c)
            std::cout << "advertise\n";
        else if (e == r + c)
            std::cout << "does not matter\n";
        else
            std::cout << "do not advertise\n";
    }
}