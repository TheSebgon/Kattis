#include <iostream>

int main()
{
    int n, temp, max = 0;
    std::cin >> n;
    int* pt = new int[n];                   // || vector
    int* pd = new int[n];
    std::cin >> pt[0] >> pd[0];

    for (int i = 1; i < n; i++)
    {
        std::cin >> pt[i] >> pd[i];
        temp = (pd[i] - pd[i - 1]) / (pt[i] - pt[i - 1]);
        if (max < temp)
            max = temp;
    }
    std::cout << max;
    delete[]pt,pd;
}