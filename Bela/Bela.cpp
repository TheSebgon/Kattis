#include <iostream>

int Value(char card);
int Value_Trump(char card);

int main()
{
    char trump, suit, card;
    int hands;
    std::cin >> hands >> trump;
    int sum = 0;

    for (int i = 0; i < (hands * 4); i++)
    {
        std::cin >> card >> suit;

        if (suit == trump)
            sum += Value_Trump(card);
        else
            sum += Value(card);
    }
    std::cout << sum;
}

int Value_Trump(char card)
{
    switch (card) {
    case 'A':
        return 11;
    case 'K':
        return 4;
    case 'Q':
        return 3;
    case 'J':
        return 20;
    case 'T':
        return 10;
    case '9':
        return 14;
    }
    return 0;
}
int Value(char card)
{
    switch (card) {
    case 'A':
        return 11;
    case 'K':
        return 4;
    case 'Q':
        return 3;
    case 'J':
        return 2;
    case 'T':
        return 10;
    }
    return 0;
}