#include <iostream>
using namespace std;

int first(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
  
}
int last(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[7] = {2, 4, 6, 6, 6, 14, 25};
    int f = first(arr, 7, 6);
    int l = last(arr, 7, 6);
    cout << "first Occ : " <<f << endl;
    cout << "last Occ : " <<l <<endl;
    int ans = (l - f)+1;
    cout<< "total Occ : " << ans;
}
