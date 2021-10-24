#include <iostream>
#include <cmath>

int main()
{
    int number;
    std::cin >> number;

    int* pn = new int[number];
    int* pl = new int[number];
    
    for (int i = 0; i < number; i++)
    {
        std::cin >> pn[i];
        pl[i] = pn[i] % 10;
        pn[i] = (pn[i] - pl[i])/10;
    }

    int result = 0;

    for (int i = 0; i < number; i++)
    {
        result += pow(pn[i], pl[i]);
    }
   
    std::cout << result;

    delete[]pn;
    delete[]pl;
}