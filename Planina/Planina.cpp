#include <iostream>

int main()
{
    int n,points;
    std::cin >> n;
    points = 2;
    for (int i = 0; i < n; i++)
    {
        points += points-1;
    }
    std::cout << points*points;
}