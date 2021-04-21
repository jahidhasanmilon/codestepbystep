#include <iostream>
using namespace std;

int main()
{
    int sum=0, number;
    for (;;)
    {
        cout << "Type a number: ";
        cin >> number;
        if (number == -1)
        {
            break;
        }
        sum = sum + number;
    }
    cout << "Sum is " << sum;
}


