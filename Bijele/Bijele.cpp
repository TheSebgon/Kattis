#include <iostream>

int main()
{
    int full_set[6]{ 1,1,2,2,2,8 };
    int given_set[6];
    for (int i = 0; i < 6; i++)
        std::cin >> given_set[i];
    for (int i = 0; i < 6; i++)
        std::cout << full_set[i] - given_set[i] << ' ';
}