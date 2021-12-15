#include <iostream>

int main()
{
    int n, h, v; //thick==4
    std::cin >> n >> h >> v;

    h = h > n - h ? h : n - h; // choose: greater of the horizontal length heights 
    v = v > n - v ? v : n - v; //choose: greater of the vertical length heights

    std::cout << h*v*4; //volume formula :)
}