#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 4> sides;
    for (int i = 0; i < 4; i++)
        std::cin >> sides[i];
    std::sort(sides.begin(), sides.end());
    std::cout << sides[0] * sides[2];
}