#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;

    if (m < n)
        std::swap(n, m);

    for (int i = n + 1; i <= m + 1; i++)
    {
        std::cout << i << std::endl;
    }
}    //most likelly(same %) is range between lowest dice +1 and biggest dice +1