#include <iostream>

int main()
{
    int stones;
    std::cin >> stones;

    while (stones > 1)
    {
        stones -= 2;
    }
    if(stones==0)
        std::cout << "Bob";
    else if(stones==1)
        std::cout << "Alice";
}