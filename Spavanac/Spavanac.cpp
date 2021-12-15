#include <iostream>

int main()
{
    int hours, minutes, alarm = 45;

    std::cin >> hours >> minutes;
    
    if (minutes >= alarm)
    {
        minutes -= alarm;
        std::cout << hours << ' ' << minutes;
    }
    else if (minutes < alarm)
    {
        if (hours == 0)hours = 24;
        hours -= 1;
        minutes += 60 - alarm;
        std::cout << hours << ' ' << minutes;
    }
}