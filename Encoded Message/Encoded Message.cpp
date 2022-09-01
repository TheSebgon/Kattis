#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main()
{
    std::string massage;
    int N; 
    std::cin >> N; 

    for (int i = 0; i < N; i++)
    {
        std::cin >> massage;
        int x = static_cast<int>(sqrt(massage.size()));
        std::vector<std::vector<char>> tab(x);
        int t = 0;

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                tab.at(i).push_back(massage.at(t));
                t++;
            }
        }

        for (int j = x - 1; j >= 0; j--) 
        {
            for (int i = 0; i < x; i++) 
            {
                std::cout << tab[i][j];
            }
        }
        std::cout << std::endl;
    }
}