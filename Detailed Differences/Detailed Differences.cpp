#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::string a, b, c;

    for (int i = 0; i < n; i++)
    {
        c.clear();
        std::cin >> a >> b;

        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] == b[j])
                c += '.';
            else
               c += '*';
        }
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << std::endl;
    }
}
