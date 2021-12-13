#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int* tab = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> tab[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
        std::cout << tab[i] << std::endl;
    }
    delete[]tab;
}
