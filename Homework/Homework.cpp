
#include <iostream>
int main()
{
    int a, b, count = 0;;
    char ch;

    std::cin >> a;
    while (std::cin >> ch)
    {
        if (ch == '-')
        {
            std::cin >> b;
            count += b - a;
        }
        if (ch == ';')
        {
            count++;
            std::cin >> a;
        }
        if (ch == ' ') break;
    }
    std::cout << count + 1;
}