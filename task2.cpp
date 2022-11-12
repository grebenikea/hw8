#include <iostream>

int cubeV(int x)
{
    int cube = x * x * x;
    return cube;
}


int main()
{
    int a = 10;
    std::cout << cubeV(a) << "\n";
}
