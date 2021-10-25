#include <iostream>

int main()
{
    double cost_of_seed, temp_w, temp_l, sum = 0.0;
    int lawns;

    std::cin >> cost_of_seed >> lawns;

    for (int i = 0; i < lawns; i++)
    {
        std::cin >> temp_w >> temp_l;
        sum += temp_w * temp_l;
    }
    std::cout.precision(16);
    std::cout << sum * cost_of_seed;
}