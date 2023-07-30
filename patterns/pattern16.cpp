#include <iostream>
using namespace std;

int main()
{
    // 1 2 3 4 5 * 5 4 3 2 1
    // 1 2 3 4 * * * 4 3 2 1
    // 1 2 3 * * * * * 3 2 1
    // 1 2 * * * * * * * 2 1
    // 1 * * * * * * * * * 1
    
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j = j + 1;
        }

        int star = 2;
        while (star <= i * 2)
        {
            cout << "* ";
            star = star + 1;
        }

        j = n - i + 1;
        while (j >= 1)
        {
            cout << j << " ";
            j = j - 1;
        }

        cout << endl;
        i = i + 1;
    }
}