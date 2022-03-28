#include <iostream>

int main()
{
    int G, T, N, temp, sum = 0;
    std::cin >> G >> T >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> temp;
        sum += temp;
    }
 
    G -= T;
    G *= 0.9;
    std::cout << G - sum;
}