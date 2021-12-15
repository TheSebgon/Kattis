#include <iostream>
#include <cmath>

int main()
{
    int n, w, h,m,p;
    bool ans[50];
    std::cin >> n >> w >> h;
    p = std::sqrt(pow(w, 2) + pow(h, 2));
    for (int i = 0; i < n; i++)
    {
        std::cin >> m;
        if (m <= w || m <= h || m <= p)
            ans[i] = 0;
        else
            ans[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
            std::cout << "DA" << std::endl;
        else
            std::cout << "NE"<<std::endl;
    }
}