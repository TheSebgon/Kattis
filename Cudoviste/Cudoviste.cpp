#include <iostream>
#include <vector>
#include <array>

int main()
{
    std::vector<std::vector<char>> map;
    std::array<int, 5> parking_spaces{ 0,0,0,0,0 };
    int R, C;
    std::cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        std::vector<char> temp;
        for (int j = 0; j < C; j++)
        {
            char t;
            std::cin >> t;
            temp.push_back(t);
        }
        map.push_back(temp);
    }
   
    for (int i = 0; i < R - 1; i++) 
    {
        for (int j = 0; j < C - 1; j++) 
        {
            int cars = 0;

            if (map[i][j] == 'X') cars++;
            if (map[i + 1][j] == 'X') cars++;
            if (map[i][j + 1] == 'X') cars++;
            if (map[i + 1][j + 1] == 'X') cars++;

            if (map[i][j] == '#') continue;
            if (map[i + 1][j] == '#') continue;
            if (map[i][j + 1] == '#') continue;
            if (map[i + 1][j + 1] == '#') continue;
            parking_spaces[cars]++;
        }
    }

    for (auto i : parking_spaces)
        std::cout << i << std::endl;
}