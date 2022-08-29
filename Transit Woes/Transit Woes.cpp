#include <iostream>
#include <vector>

void input_data(std::vector<int>& x, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        x.push_back(temp);
    }
}

int main()
{
    int s, t, n, time;
    std::vector<int> d,b,c;
    std::cin >> s >> t >> n;

    input_data(d, n + 1);
    input_data(b, n);
    input_data(c, n);
    time = s;

    for (int i = 0; i < n; i++)
    {
        time += d[i];
        while (time > c[i]) c[i] += c[i];
        time += (c[i] - time);
        time += b[i];
    }
    time += d[n];

    if (time <= t) std::cout << "yes" << std::endl;
    else std::cout << "no" << std::endl;
}