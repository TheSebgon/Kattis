#include <iostream>

int main()
{
    int n, count=0;
    double sum = 0.0;

    std::cin >> n;
    int * pt = new int [n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> pt[i];
    }


    for (int i = 0; i < n; i++)
    {
        if (pt[i] >= 0)
        {
            sum += pt[i];
            count++;
        }
    }

    std::cout << sum / count;
    delete[] pt;
}