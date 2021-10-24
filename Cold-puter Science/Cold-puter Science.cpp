#include <iostream>

int main()
{
    int temp_quantity,temp;
    std::cin >> temp_quantity;
    int count = 0;
    for (int i = 0; i < temp_quantity; i++)
    {
        std::cin >> temp;
        if (temp < 0)
            count++;
    }
    std::cout << count;
}

