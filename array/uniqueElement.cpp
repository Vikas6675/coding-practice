#include <iostream>
using namespace std;

int uniqueElement(int arr[], int n)
{

    int i, j;
    int count = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
           
                break;
        }
        if (j == n)
        {
            cout << "\nNon-repeating element [" << count << "]"
                 << " : " << arr[i] << endl;
        }
            count++;
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

    int arr[5] = {5, 7, 9, 5, 6};
    printArray(arr, 5);
    uniqueElement(arr, 5);
}
