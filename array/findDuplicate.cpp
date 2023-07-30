#include <iostream>
using namespace std;

int uniqueElement(int arr[], int n)
{

    int i, j;
    int count = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j] )
           cout<< arr[i]<<" ";
               // break;
        }
    }

    return 0;
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{

    int arr[6] = {5, 7,6, 9, 5, 6};
    printArray(arr, 6);
    uniqueElement(arr, 6);
}
