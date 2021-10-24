#include <iostream>

int main()
{
    int temp;
    int sum[5]{ 0,0,0,0,0 };
    int player = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> temp;
            sum[i] += temp;
        }
    }
    temp = sum[0]; 

    for (int i = 1; i < 5; i++)
    {
        if (temp < sum[i])
        {
            temp = sum[i];
            player = i + 1;
        }
        else continue;
    }
    std::cout << player <<" "<< temp;
}