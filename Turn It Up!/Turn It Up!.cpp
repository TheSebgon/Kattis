#include <iostream>
#include <string>

int main()
{
    std::string v_up{ "Skru op!" };
    std::string v_down{ "Skru ned!" };
    std::string request;
    int n, volume = 7;
    std::cin >> n;
    for (int i = 0; i <= n; i++)
    {
        std::getline(std::cin, request);
        if (request == v_up && volume < 10) volume++;
        else if (request == v_down && volume > 0) volume--;
    }
    std::cout << volume;
}