#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter amount : ";
    cin >> amount;

    int hundred, fifty, twenty, one;

    switch (1)
    {
    case 1:
        if (hundred > 0)
        {
            hundred = amount / 100;
            cout << "hundred note required : " << hundred << endl;
            amount = amount - hundred * 100;
        }
    case 2:
        fifty = amount / 50;
        if (fifty > 0)
        {
            cout << "fifty note required : " << fifty << endl;
            amount = amount - fifty * 50;
        }
    case 3:
        twenty = amount / 20;
        if (twenty > 0)
        {
            cout << "twenty note required : " << twenty << endl;
            amount = amount - twenty * 20;
        }
    case 4:
        one = amount / 1;
        if (one > 0)
        {
            cout << "one note required : " << one << endl;
            amount = amount - one * 1;
        }
    }
}
