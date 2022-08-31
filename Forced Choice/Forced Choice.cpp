#include <iostream>

int main()
{
    int N, P, S, m, temp;
    bool keep;
    std::cin >> N >> P >> S;

    for (int i = 0; i < S; i++)
    {
        keep = false;
        std::cin >> m;

        for (int j = 0; j < m; j++)
        {
            std::cin >> temp;
            if (temp == P) keep = true;
        }

        if (keep == true) std::cout << "KEEP\n";
        else std::cout << "REMOVE\n";
    }
}
