#include <iostream>
using namespace std;

int main()
{
    int num = 0, count = 0, cnt = 0;

    cin >> num;

    int* arr = new int[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];

        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                cnt++;
            }
        }

        if (cnt == 2)
            count++;
        
        cnt = 0;
    }
    
    cout << count;

    return 0;
}