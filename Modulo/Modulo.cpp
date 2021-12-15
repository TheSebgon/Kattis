#include <iostream>

int main()
{
    int input,a,count = 0;
    bool tab[42]{};

    for (int i = 0; i < 10; i++)
    {
        std::cin >> input;
        a = input % 42;
        if (tab[a] == 0)
            tab[a] = 1;
    }
    for (int i = 0; i < 42; i++)
        if (tab[i] == 1) count++;
    std::cout <<count ;
}