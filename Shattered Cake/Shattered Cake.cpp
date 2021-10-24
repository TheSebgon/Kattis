#include <iostream>

int main()
{
    int width, pieces, area, temp_w, temp_l;
    int* pw = &temp_w;
    int* pl = &temp_l;

    std::cin >> width >> pieces;
    area = 0;
    for (int i = 0; i < pieces; i++)
    {
        std::cin >> *pw >> *pl;
        area += (*pw) * (*pl);
    }
    std::cout << area / width;
}

/*
int main()
{
    int width, pieces, area, i, temp_w, temp_l;
    std::cin >> width >> pieces;
    area = 0;
    while (std::cin >> temp_w >> temp_l)
    {
        area += temp_w * temp_l;
        if (--pieces == 0)
            break;
    } 
    std::cout << area/width;
}
*/