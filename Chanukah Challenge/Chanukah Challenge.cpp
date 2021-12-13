#include <iostream>

int main()
{
    int p, k, n, sum = 0;

    std::cin >> p;

    for (int i = 0; i < p; i++)
    {
        sum = 0;
        std::cin >> k >> n;
        for (int j = 1; j <= n; j++)
        {
            sum += j;
        }
        sum += n;
        std::cout << k << ' ' << sum << std::endl;
    }
}