#include <iostream>

int main()
{
    int cases, temp;
    std::cin >> cases;
    int sum = 1;
    for (int i = 0; i < cases; i++)
    {
        std::cin >> temp;
        for (int j = 1; j <temp;j++)
        {
            sum += j * sum;
        }
        std::cout << sum % 10 << std::endl;
        sum = 1;
    }
}