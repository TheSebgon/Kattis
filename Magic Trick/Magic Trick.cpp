#include <iostream>
#include <string>

int main()
{
    std::string cards;
    char temp;
    std::cin >> cards;
    int x = 1;
    for (int i = 0; i < cards.length(); i++)
    {
        temp = cards[i];
        for (int j = i+1; j < cards.length(); j++)
        {
            if (temp == cards[j])
            {
              x = 0;
            }
        }
    }
    std::cout << x;
}

