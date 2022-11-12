#include <iostream>

int cubeR(const int& x)
{
    int cube = x * x * x;
    return cube;
}


int main()
{
    int a = 10;
    std::cout << cubeR(a) << "\n";
}