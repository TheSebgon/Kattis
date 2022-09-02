#include <iostream>
#include <array>
#include <string>

int main()
{
    std::array<int, 12> months { 31,28,31,30,31,30,31,31,30,31,30,31 };
    std::array<std::string, 7> days { "Thursday", "Friday", "Saturday", "Sunday","Monday", "Tuesday", "Wednesday" };
    int mm, dd, sum = 0;
    std::cin >> dd >> mm;
    mm--;
    for (int i = 0; i < mm; i++)
        sum += months.at(i);
    sum += dd;
    sum = sum%7;
    if (sum == 0)sum = 6;
    else sum--;
    std::cout << days.at(sum);
}