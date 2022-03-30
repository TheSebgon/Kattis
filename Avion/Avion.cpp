#include <iostream>
#include <string>

int main()
{
    std::string s;
    int t,count = 0;
    int temp[5];
    
    for (int i = 0;i < 5; i++)
    {
        std::cin >> s;
        t = s.find("FBI");
        if ((t != std::string::npos))
        {
            temp[count] = i+1;
            count++;
        }
    }
    if (count == 0)
        std::cout << "HE GOT AWAY!";
    else
        for (int i = 0; i < count; i++)
            std::cout << temp[i] << " ";
}