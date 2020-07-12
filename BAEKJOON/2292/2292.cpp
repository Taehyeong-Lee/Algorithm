#include <iostream>

int main()
{
    int N, i = 1, sum = 1;
    std::cin >> N;
    while(N > sum)
    {
        sum += i*6;
        i += 1;
    }
    std::cout << i << std::endl;
}