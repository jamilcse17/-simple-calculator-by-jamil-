#include <iostream>

using namespace std;

int main()
{
    int digit1;
    cout << "Enter your first digit, and then press enter" << endl;
    cin >> digit1;
    int digit2;
    cout << "Enter your second digit, and then press enter" << endl;
    cin >> digit2;
    int o;
    cout << "If you wish to add, press 1, and then enter" << endl;
    cout << "If you wish to suntract, press 2, and then enter" << endl;
    cout << "If you wish to multiply, press 3, and then enter" << endl;
    cout << "If you wish to divide, press 4, and then enter" << endl;
    cin >> o;
    if (o = 1)
    {
        cout << "The sum of your two digits is " << digit1+digit2 << endl;
    }

    else if (o = 2)
    {
        cout << "The difference of your two digits is " << digit1-digit2 << endl;
    }

    else if (o = 3)
    {
        cout << "The product of your two digits is " << digit1*digit2 << endl;
    }

    else if (o = 4)
    {
        cout << "The quotient of your two digits is " << endl;
        cout << "Quotient " << digit1/digit2 << endl;
        cout << "Remainder " << digit1%digit2 << endl;
    }

    else if (o > 4)
    {
        cout << "Invalid operation" << endl;
    }
    return 0;
}
