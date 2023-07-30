#include <iostream>
using namespace std;

void exchange(int arr[], int n)
{
    int start = 0;
    int end = 1;

    while (start <n-1)
    {
        swap(arr[start], arr[end]);
        start=start+2;
        end=end+2;
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {5, 7, 9, -2, -5, 6};
   // int brr[6] = {1, 2, 3, 4, 5, 6};

    exchange(arr, 6);
   // exchange(brr, 6);

    printArray(arr, 6);
   // printArray(brr, 6);

    return 0;
}