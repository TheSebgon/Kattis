#include <iostream>

int main()
{
    int number,temp;
    int sum = 0;

    std::cin >> number;
    
    for (int i = 0; i < number; i++)
    {
        std::cin >> temp;
        sum += temp;
    }

    std::cout << sum;
}
