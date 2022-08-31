#include <iostream>
#include <string>
#include <cctype>
int main()
{
    int N, sum = 0;
    std::string rose{ "rose" };
    std::string pink{ "pink" };
    std::string button;
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> button;
        for (std::size_t i = 0; i < button.size(); i++)
            button[i] = tolower(button[i]);
        if (button.find(rose) != std::string::npos || button.find(pink) != std::string::npos)
            sum++;
    }
    if (sum > 0)
        std::cout << sum;
    else
        std::cout << "I must watch Star Wars with my daughter";
}
