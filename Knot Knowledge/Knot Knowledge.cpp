#include <iostream>

int main()
{
    int Knots;
    int KnotsToLearn[50];
    int KnotsAlreadyKnown[50];
    bool Known = false;
    
    std::cin >> Knots;
    for (int i = 0; i < Knots; i++)
    {
        std::cin >> KnotsToLearn[i];
    }
    for (int i = 0; i < Knots-1; i++)
    {
        std::cin >> KnotsAlreadyKnown[i];
    }
  
    for (int i = 0; i <= Knots; i++)
    {
        for (int j = 0; j < Knots-1; j++)
        {
            if (KnotsToLearn[i] == KnotsAlreadyKnown[j])
            {
                Known = true;
                break;
            } 
        }

        if (Known == false && i == Knots)
        {
            Known = false;
            break;
        }
        else if (Known == false)
        {
            std::cout << KnotsToLearn[i];
            break;
        }
        else if (Known == true)
        {
            Known = false;
            continue;
        }
    }  
}