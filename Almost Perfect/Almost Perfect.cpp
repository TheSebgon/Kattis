#include <iostream>
#include <math.h>

int main()
{
    int p, temp;

    while (std::cin >> p)
    {
        temp = 1;
     
        for (int i = 2; i < static_cast<int>(sqrt(p)) + 1; i++)
        {
            if (p % i == 0)
            {
                if (i != (p / i))
                    temp += (p / i);
                temp += i;
            }
        }
       
        if (temp == p)
            std::cout << p << " perfect" << std::endl;
        else if (temp >= (p - 2) && temp <= (p + 2) && temp != p)
            std::cout << p << " almost perfect" << std::endl;
        else
            std::cout << p << " not perfect" << std::endl;
    }
}