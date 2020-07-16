#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a(3);
    vector<int> b(2);
    for(int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < 2; i++)
    {
        cin >> b[i];
    }
    cout << *(min_element(a.begin(), a.end())) + *(min_element(b.begin(), b.end())) - 50;
}