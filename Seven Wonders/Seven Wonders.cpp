#include <iostream>
#include <string>
int main()
{
    std::string str;
    int sum = 0, t = 0, c = 0, g = 0;
    std::cin >> str;

    for(int i=0;i<str.length();i++)
    {
        if (str[i] == 'T')       t++;
        else if (str[i] == 'C')  c++;
        else if (str[i] == 'G')  g++;
    }

    sum+=(t*t)+(c*c)+(g*g);

    while ((t > 0) && (g > 0) && (c > 0))
    {
        sum += 7;
        t--; c--; g--;
    }
    std::cout << sum;
}