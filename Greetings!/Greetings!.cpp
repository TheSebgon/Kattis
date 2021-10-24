#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;
    int count = 0;
    while (word[count+1] == 'e')
    {
        count++;
    }
    word = "h";
    for (int i = 0; i < count*2; i++)
    {
        word += 'e';
    }
    word += 'y';
    std::cout << word;
}
