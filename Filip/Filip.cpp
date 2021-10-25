#include <iostream>

int main()
{
    int a[2], reversed = 0, remainder;
    std::cin >> a[0] >> a[1];

    for (int i = 0; i < 2; i++)
    {
        while (a[i] != 0)
        {
            remainder = a[i] % 10;
            reversed = reversed * 10 + remainder;
            a[i] /= 10;
        }
        a[i] = reversed;
        reversed = 0;
    }
    if (a[0] < a[1])
        std::cout << a[1];
    else
        std::cout << a[0];
}