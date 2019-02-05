#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i, arr[16];

    memset(arr, 0, sizeof(arr));
    arr[0] = 1;
    for (i = 3; i < 16; i++)
        arr[i] += (arr[i - 3] > 0);
    for (i = 5; i < 16; i++)
        arr[i] += (arr[i - 5] > 0);
    for (i = 10; i < 16; i++)
        arr[i] += (arr[i - 10] > 0);
    cout << "array:\t\t";
    for (i = 0; i < 16; i++)
        cout << arr[i] << '\t';
    cout << "\nIndices:\t";
    for (i = 0; i < 16; i++)
        cout << i << '\t';
    cout << "\nNumber of ways to get sum "<<15<<" is "<<arr[15]<<"\n";
    return 0;
}
