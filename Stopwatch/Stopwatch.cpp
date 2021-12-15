#include <iostream>

int main()
{
    int n,t,temp,sum=0;
    std::cin >> n >> t;
    
    for (int i = 0; i < n-1; i++)
    {
        if (i < n)
            temp = t;
        else break;
        std::cin >> t;
        if (i % 2 == 0)
            sum += t - temp;

    }

    if (n % 2 == 0)
        std::cout << sum;
    else
        std::cout << "still running";
}