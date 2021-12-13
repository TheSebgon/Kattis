#include <iostream>

int main()
{
    int n,k,temp;
    float r, sum = 0.0;
    float min, max;

    std::cin >> n >> k;
    temp = n - k;
    for (int i = 0; i < k; i++)
    {
        std::cin >> r;
        sum += r;
    }

    min = (sum + (temp * -3)) / n;
    max = (sum + (temp * 3)) / n;
    std::cout << min << ' ' << max;

}