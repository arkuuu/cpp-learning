// Task: https: //www.cprogramming.com/complete/array.html

#include <iostream>
using namespace std;

int main()
{
    int array[8];
    for (int x = 0; x < sizeof(array) / sizeof(int); x++)
    {
        cin >> array[x];
    }
    for (int x = 0; x < sizeof(array) / sizeof(int); x++)
    {
        cout << array[x];
    }
    return 0;
}
