#include <iostream>

int main()
{
    int x, y;
    std::cin >> x;
    std::cin >> y;

    if(x > 0)
    {
        //printf("%d", (y > 0) ? 1 : 4);
        (y > 0) ? std::cout << 1 : std::cout << 4;
    }
    else
    {
        //printf("%d", (y > 0) ? 2 : 3);
        (y > 0) ? std::cout << 2 : std::cout << 3;
    }
}