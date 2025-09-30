#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {3, 11, 7, 2, 5};
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << min << " " << "is the minimum value";
}