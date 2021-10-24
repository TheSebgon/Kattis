#include <iostream>

int main()
{
    int cases;
    double seconds, beats;
    std::cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        std::cin >> beats >> seconds;
        std::cout.precision(6);

        std::cout << (beats * 60.0000 / seconds) - (beats * 60.0000 / seconds) / beats << " ";
        std::cout << beats * 60.0000 / seconds << " ";
        std::cout << (beats * 60.0000 / seconds) + (beats * 60.0000 / seconds) / beats << std::endl;
    }
}