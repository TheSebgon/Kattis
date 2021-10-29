#include <iostream>
#include <string>
int main() 
{
    std::string ap_name;
    std::cin >> ap_name;
    for (int i = 0; i < ap_name.length() - 1; i++) 
    {
        if (ap_name[i] != ap_name[i + 1]) 
        {
            std::cout << ap_name[i];
        }
    }
    std::cout << ap_name[ap_name.length() - 1];
    return 0;
}