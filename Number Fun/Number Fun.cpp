#include <iostream>

int main()
{
    using std::cout;
    int n, a, b, c;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b >> c;
        if (a + b == c) cout << "Possible" << std::endl;
        else if (a - b == c || b - a == c) cout << "Possible" << std::endl;
        else if (a / b == c && a % b == 0) cout << "Possible" << std::endl;
        else if (b / a == c && b % a == 0) cout << "Possible" << std::endl;
        else if(a*b==c) cout << "Possible" << std::endl;
        else cout << "Impossible" << std::endl;
    }
}
