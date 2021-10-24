#include <iostream>
#include <string>
#include <set>

int main()
{
    int cases, trip_count ,count;
    std::set<std::string> trips; //set is much better than vector in that case

    std::cin >> cases;
   
    for (int i = 0; i < cases; i++)
    {
        std::cin >> trip_count;
        std::string city;

        for (int j = 0; j < trip_count; j ++ )
        {
            std::cin >> city;
            trips.emplace(city);    //If destination is a duplicate, emplace will just fail.
        }

        std::cout << trips.size() << std::endl;
        trips.clear();
    }
}