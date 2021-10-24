#include <iostream>
#include <string>

int main()
{
    std::string sequence;
    std::cin>>sequence;
    int S_length= sequence.size();
    int position = 1;
    for (int i = 0; i < S_length; i++)
    {
        switch (sequence[i])
        {
        case 'A':
            if (position == 1)
                position = 2;
            else if (position == 2)
                position = 1; break;
        case 'B':
            if (position == 2)
                position = 3;
            else if (position == 3)
                position = 2; break;
        case 'C':
            if (position == 3)
                position = 1; 
            else if (position == 1)
                position = 3; break;
        }
    }
    std::cout << position;
}