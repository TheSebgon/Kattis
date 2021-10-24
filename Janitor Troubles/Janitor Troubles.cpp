#include <iostream>
#include <cmath>

// simplified form of Bretschneider’s formula to get the (maximum) area: 
//          K= sqrt( (s−a)(s−b)(s−c)(s−d) )
int main()
{
    double a, b, c, d, semiperimeter,result;

    std::cin >> a >> b >> c >> d;
    semiperimeter = (a + b + c + d) / 2;
    result = sqrt((semiperimeter - a) * (semiperimeter - b) * (semiperimeter - c) * (semiperimeter - d));

    std::cout.precision(16);
    std::cout << result;
}