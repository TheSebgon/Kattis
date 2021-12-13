#include <iostream>

int main()
{
    int n, k, temp,sum=0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> k;
        for (int j = 0; j < k; j++)
        {
            std::cin >> temp;
             sum += (temp - 1);
        }
        std::cout << sum + 1 << std::endl;
        sum = 0;
    }
}